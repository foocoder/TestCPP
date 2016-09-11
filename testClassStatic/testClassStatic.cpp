// ---- Program Info Start----
//FileName:     testClassStatic.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-10 09:54:27
// ---- Program Info End  ----

#include <iostream>
#include <cstdlib>

using namespace std;

class Base{
    static const int nVal = 0;
    static const float fVal;
    int base;
    public:
    static int ncVal;
    static const int nNum[];
    static double dVal;
    Base(){
        cout<<"Base() Invoked"<<endl;
        f();
        f1();
    }
    ~Base(){
        cout<<"~Base() Invoked"<<endl;
    }
    virtual void f(){
        cout<<"Base::f() Invoked"<<endl;
    }
    void f1(){
        f();
    }
};
class Derived:public Base{
    //static Base a;
    public:
        Derived(){
            cout<<"Derived() Invoked"<<endl;
            f();
        }
        ~Derived(){
            cout<<"~Derived() Invoked"<<endl;
            exit(0);
        }
        void f() override final{
            cout<<"Derived::f() Invoked"<<endl;
            //a.f();
        }
};
const int Base::nNum[] = {1,2,3};
int Base::ncVal = 0;
const float Base::fVal = 0.123;
double Base::dVal;
static Derived a;

int main(int argc, char *argv[])
{

    //cout<<Base::nVal<<Base::fVal<<Base::dVal<<endl;
    cout<<Base::ncVal<<endl;
    Base::ncVal = 1;
    cout<<Base::ncVal<<endl;
    for( const auto & i : Base::nNum )
        cout<<i<<endl;
    volatile const int a = 0;
    volatile const int & b = a;
    int & c =const_cast<int &> (b);
    c = 1;
    cout<<a<<b<<c<<endl;
    cout<<Base::dVal<<endl;
    cout<<endl;
    Derived d;
    Base * p = &d;
    p->f1();
    exit(0);

    return 0;
}
