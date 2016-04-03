// ---- Program Info Start----
//FileName:     testClassInitial.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-03 10:37:47
// ---- Program Info End  ----

#include <iostream>

using namespace std;

static int g_i;
class MemberClass{
    public:
    MemberClass(){
        cout<<"MemberClass Default Constructor Invoked!"<<endl;
    }
};
class Based{
    int _val0; // uninitialized, value unkown
    int _val1 = {0};//in-class initializer(C++11), List Initialization(C++11)
    int _val2{0};//in-class initializer(C++11), List Initialization(C++11)
    //int _val3{0.5};//Error in <C++ Primer> 5th Version,because of Loosing Information of variables! But It Can be compiled successful!
    //int _val3(0);//Error! in-class initializer can't use ()!
    //static int _s_val0 = 0; //Error! ISO C++ forbids in-class initialization of non-const static data member;
    const int _c_val{0};//in-class initializer(C++11), List Initialization(C++11)
    public:
    static int _s_val0; //
    static MemberClass A;
    Based():_val0{1}{

    }

    void getValue(){
        cout<<"_val0:"<<_val0<<endl;
        cout<<"_val1:"<<_val1<<endl;
        cout<<"_val2:"<<_val2<<endl;
        cout<<"_c_val:"<<_c_val<<endl;
        //cout<<"_val3:"<<_val3<<endl;
    }
    static void getStatic() {
        cout<<"Based::_s_val:"<<_s_val0<<endl;
        getValue();
    }
};
class Derived:public Based{
    public:
        static void getStatic(){ //Override
            cout<<"Derived::_s_val:"<<_s_val0<<endl;
        }
};
int Based::_s_val0 = -1; //Initialization to static data member
MemberClass Based::A; //Initialization to static data member


int main(int argc, char *argv[])
{
    static int local_static_i;
    Based A;
    A.getValue();
    Based::getStatic();
    cout<<"Based::_s_val:"<<Based::_s_val0<<endl;
    cout<<"g_i:"<<g_i<<endl;
    cout<<"local_static_i:"<<local_static_i<<endl;
    Derived::getStatic();
    return 0;
}
