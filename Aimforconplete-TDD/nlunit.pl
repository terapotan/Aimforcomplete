use strict;
use Win32::Console;
use utf8;
use Encode;

use constant BLACK => 0;
use constant BLUE => 1;
use constant GREEN => 2;
use constant CYAN => 3;
use constant RED => 4;
use constant MAGENTA => 5;
use constant YELLOW => 6;
use constant WHITE => 7;
use constant GRAY => 8;
use constant BRIGHT => 8;

binmode STDIN,':encoding(cp932)';
binmode STDOUT,':encoding(cp932)';
binmode STDERR,':encoding(cp932)';

$|=1; # colorChange関数を使用するときは、バッファリングを無効にすること。
our $console = new Win32::Console(STD_OUTPUT_HANDLE);

if(@ARGV != 1){
    print "nlunitのシグネチャは以下の通りです。\n";
    print "\n";
    print "nlunit.pl <ソースコード名>\n";
    exit;
}


my $fileName = $ARGV[0];
my @failTest;
open(DATAFILE,"< ".$fileName) or die("Error:$!");
my $line=<DATAFILE>;

system("cls");

while($line){
    chomp($line);
    print decode_utf8($line)."(y/n)>";
    my $inStr = <STDIN>;
    chomp($inStr);

    if($inStr eq "n"){
        push(@failTest,decode_utf8($line));
        $line=<DATAFILE>;
        next;
    } elsif($inStr eq "y"){
        $line=<DATAFILE>;
        next;
    } else {
        next;
    }
}

system("cls");

if(@failTest == 0){
    &colorChange(GREEN,WHITE,$console);
    print "          ";
    &colorChange(BLACK,WHITE,$console);
    print " TEST PASSED ";
    &colorChange(GREEN,WHITE,$console);
    print "          ";
    &colorChange(BLACK,WHITE,$console);
} else {
    &colorChange(RED,WHITE,$console);
    print "          ";
    &colorChange(BLACK,WHITE,$console);
    print " !!!TEST FAILED!!! ";
    &colorChange(RED,WHITE,$console);
    print "          \n";
    &colorChange(BLACK,WHITE,$console);
    foreach my $str (@failTest){
        print "$str\n";
    }
}















# 使用できる色は以下の通り。
# 0:Black,1:Red,2:Green,3:Yellow,4:Blue,5:Magenta
# 6:Cyan,7:White
# 以上の色番号に8を足すとBrightになる。
# $console->Attr($colorNum)で指定。
# colorNumはxxxxyyyy(x:背景色,y:文字色)の8ビットで構成されている

sub colorChange{
    my ($backColor,$charColor,$console) = @_;

    $console -> Attr(($backColor << 4 )| $charColor);
    #printf("%d",($backColor << 4 )| $charColor);
    return;
}