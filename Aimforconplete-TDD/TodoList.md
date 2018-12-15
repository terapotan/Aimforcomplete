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

# 現在のUML図
~~~plantuml
@startuml
interface showThings{
    + bool show()
}
class bar{
    - int barx
}
class block{
}
class ball{
}
class drawingLib{
    + pictureDraw(int pointX,pointY)
}

showThings <|.. bar
showThings <|.. block
showThings <|.. ball
drawingLib <-down- bar
drawingLib <-down- block
drawingLib <-down- ball

@enduml
~~~


