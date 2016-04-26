// ---- Program Info Start----
//FileName:     testPartialDestructor.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-26 15:10:59
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Base{
        int _valb;
        int * _ptrValb;
    public:
        Base():_valb(0){
            _ptrValb = new int(0);
        }
        virtual void getVal(){
            cout<<"Base::"<<_valb<<",Base::"<<*_ptrValb<<endl;
        }
        ~Base(){
            delete _ptrValb;
        }
};

class Dervied: public Base{
        int _vald;
        int * _ptrVald;
    public:
        Dervied():Base(),_vald(1){
            _ptrVald = new int(1);
        }
        virtual void getVal(){
            cout<<"Dervied::"<<_vald<<",Dervied::"<<*_ptrVald<<endl;
        }
        ~Dervied(){
            delete _ptrVald;
        }
};

int main(int argc, char *argv[])
{
    Dervied d;
    Base * b = &d;
    d.getVal();
    b->getVal();
    delete b;//Runtime Error! Don't know why
    return 0;
}
