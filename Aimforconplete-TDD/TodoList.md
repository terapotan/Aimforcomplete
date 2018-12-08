# TodoList
- ~~show()=TRUE(showはballクラスのメンバ関数)~~
- ~~show()=TRUE(showはbarクラスのメンバ関数)~~
- ~~show()=TRUE(showはblockクラスのメンバ関数)~~
- ~~クラスの仮実装~~
- ~~ヘッダのインクルード~~
- ~~リンク設定~~
- ~~コンパイル~~
- ~~show関数の重複~~
- 生ポインタが使われている
# 現在のUML図
~~~plantUML
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

~~~