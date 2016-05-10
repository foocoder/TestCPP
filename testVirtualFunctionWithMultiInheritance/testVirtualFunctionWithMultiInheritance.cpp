// ---- Program Info Start----
//FileName:     testVirtualFunctionWithMultiInheritance.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-10 21:12:07
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Base1{
    public:
        Base1(){
            cout<<"Base1::Base1()"<<endl;
        }
        virtual ~Base1(){
            cout<<"Base1::~Base1()"<<endl;
        }
        virtual void speakClearly(){
            cout<<"Base1::speakClearly()"<<endl;
        }
        virtual Base1 * clone() const{
            cout<<"Base1::clone()"<<endl;
            return NULL;
        }
    protected:
        float data_Base1;
};

class Base2{
    public:
        Base2(){
            cout<<"Base2::Base2()"<<endl;
        }
        virtual ~Base2(){
            cout<<"Base2::~Base2()"<<endl;
        }
        virtual void mumble(){
            cout<<"Base2::mumble()"<<endl;
        }
        virtual Base2 * clone() const{
            cout<<"Base2::clone()"<<endl;
            return NULL;
        }
    protected:
        float data_Base2;
};

class Derived:public Base1, public Base2{
    public:
        Derived(){
            cout<<"Derived::Derived()"<<endl;
        }
        virtual ~Derived(){
            cout<<"Derived::~Derived()"<<endl;
        }
        virtual Derived *clone() const{
            cout<<"Derived::clone()"<<endl;
            return NULL;
        }
    protected:
        float data_Derived;
};

int main(int argc, char *argv[])
{
    Base2 *ptr = new Derived;
    delete ptr;

    Derived *pder = new Derived;
    pder->mumble();
    delete pder;

    //Base1 *pb1 = new Derived;
    //pb1->mumble(); // Compile Error.
    //delete pb1;

    Base2 *pb2 = new Derived;
    pb2->clone();
    //pb1->speakClearly(); //Compile Error.
    delete pb2;



    return 0;
}
