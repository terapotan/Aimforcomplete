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
# TodoList-TTDD
- ~~ボールの画像が表示される(場所はどこでもよい)~~
- バーの画像が表示される(場所はどこでもよい)
- ~~showThingsをインターフェース化する~~
- ~~bar,ball,blockにshow関数をオーバーロードする処理を追加~~
- ~~ボールの画像表示コードをballクラスにコピぺ。~~

# 現在のUML図
~~~plantUML
@startuml
class showThings{
    + bool show()
}
class bar{
}
class block{
}
class ball{
}

showThings <|-- bar
showThings <|-- block
showThings <|-- ball
@enduml
~~~