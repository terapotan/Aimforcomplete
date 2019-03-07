# TodoList-TDD
- ~~show()=TRUE(showはballクラスのメンバ関数)~~
- ~~show()=TRUE(showはbarクラスのメンバ関数)~~
- ~~show()=TRUE(showはblockクラスのメンバ関数)~~
- ~~クラスの仮実装~~
- ~~ヘッダのインクルード~~
- ~~リンク設定~~
- ~~コンパイル~~
- ~~show関数の重複~~
- ~~生ポインタが使われている~~
- ~~moveRight()を呼び出し,barxが1になる~~
- ~~moveLeft()を呼び出し,barxが-1になる~~
- ~~barクラスにint型を引数にとるコンストラクタを作成。~~
- ~~barクラスにbarxを追加~~
- ~~barクラスにmoveRight,moveLeft,getPointXを追加~~
- ~~barクラスにmoveRight()を100回実行後getPointX()=100を確認,その後show()=trueを確認。~~
- ~~(keyはchar型の配列ポインタ)getUserHitKey(key);を呼び出し、key[KEY_INPUT_A(0x1E)]==1が真。~~  
- ~~userInKeyクラスを作成。メンバ関数にgetUserHitKey(key)を作成。~~ 

# TodoList-TTDD
- ~~ボールの画像が表示される(場所はどこでもよい)~~
- ~~バーの画像が表示される(場所はどこでもよい)~~
- ~~ブロックの画像が表示される(場所はどこでもよい)~~
- ~~showThingsをインターフェース化する~~
- ~~bar,ball,blockにshow関数をオーバーロードする処理を追加~~
- ~~ボールの画像表示コードをballクラスにコピぺ。~~
- ~~drawingLibクラスを作成~~
- ~~drawPictureメソッドを作成~~
- ~~コードをコピペ~~
- ~~barのshow関数のコードをいじくる~~
- ~~引き続き、ball,blockも削除~~
- ~~最後にテストをする~~
- ~~barクラスのbarx=100でbarxを初期化し、バーがその位置で描画されている~~
- ~~stdafx.hに書いていたUNITTESTMODE_ENABLEを専用のヘッダーファイルに移し、UNITTESTMODE_ENABLEが必要なソースのみこれをインクルードするようにする。(コンパイル時間の短縮)~~
- ~~aキーを打つとプログラムが終了する。~~  
- ~~勝手に右にバー(bar)が動く。~~
- ~~バーを描画する~~
~~- aキーを打つと左に、sキーを押すと右に動く。~~
- メインループ内にあるif文の重複を無くす 
- ~~moveの引数を定数にする~~
- ~~イベントリスト(二次元配列)を作成する~~
- ~~イベントリストを使ってキー入力を処理する形に書き換える~~
- ~~move関数を作成~~
- ~~UML更新~~
- ~~moveNum=1であるとき、moveLeft関数が呼び出される~~
- ~~moveNum=2であるとき、moveRight関数が呼び出される~~
- ~~毎回ロードして画像を表示しているのを直す~~  
- ~~drawPicture関数の引数変更~~
- ~~関数の処理変更~~
- ~~barクラスのハンドル変数をメンバ変数にする~~
- ~~コンストラクタに画面ロード処理(loadgraph関数実行)追加~~
- ~~show関数にある画面ロード処理(loadgraph関数実行)を削除~~
- ~~移動速度を目に見えるレベルまで抑える~~
- 




# 現在のUML図
~~~plantuml
@startuml
interface showThings{
    + bool show()
}
class bar{
    - int barx
    + void moveRight()
    + void moveLeft()
    + void move(char moveNum)
    + int getPointX()
    + void show()
}
class block{
    + void show()
}
class ball{
    + void show()
}
class drawingLib{
    + void pictureDraw(int imageHandle,int pointX,int pointY)
}

class userInKey{
    + void getUserHitKey(char* recKeyData)
}

showThings <|.. bar
showThings <|.. block
showThings <|.. ball
drawingLib <-down- bar
drawingLib <-down- block
drawingLib <-down- ball

@enduml
~~~


