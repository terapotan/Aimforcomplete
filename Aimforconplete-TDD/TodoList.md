# TodoList-TDD(人力)
- ~~move関数のif文分岐をなくす~~
- aキーを押したら、左にsキーを押したら右に動くようにする



# 現在のUML図
~~~plantuml
@startuml
interface showThings{
    + bool show()
}

class bar{
    - int barx
    + void move(std::shared_ptr<moveKind> moveK)
    + int getPointX()
    + void show()
}

abstract class moveKind{
    + int move(int barx)
}

class moveRight{
    + int move(int barx)
}

class moveLeft{
    + int move(int barx)
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
class main{
    + WinMain
}

showThings <|.. bar
showThings <|.. block
showThings <|.. ball
drawingLib <-down- bar
drawingLib <-down- block
drawingLib <-down- ball
main --> bar
main --> userInKey
moveKind <-- bar
moveKind <|-- moveRight
moveKind <|-- moveLeft
@enduml
~~~





