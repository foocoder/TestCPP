// ---- Program Info Start----
//FileName:     testCopyConstructor.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-22 10:33:46
// ---- Program Info End  ----

#include <iostream>
using namespace std;

// 编译器没有提供合成的构造函数
class NonConstructor{
    public:
        int _nVal;
};

class Base{
    public:
        //Base(const Base & rhs){
            //_nVal = rhs._nVal;
            //cout<<"Copy Constructor with default parameter"<<endl;
        //}
        //拷贝构造函数可以接受多参数形式， 其第二个参数及后继参数需提供默认值
        Base(const Base & rhs, int val = 0){
            _nVal = rhs._nVal;
            cout<<"Copy Constructor with more than one parameter"<<endl;
        }
        Base():_nVal(0){}
        int getVal(){
            return _nVal;
        }
    private:
        int _nVal;
};

//编译器依旧没有生成合成构造函数
class Dervied:public NonConstructor{

};

int main(int argc, char *argv[])
{
    NonConstructor n;
    Dervied d;
    Base a;
    cout<<"Without Default Constructor: _nVal = "<<n._nVal<<endl;
    Base b( a,1 );
    //Base b{a};
    return 0;
}

