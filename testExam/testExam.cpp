// ---- Program Info Start----
//FileName:     testExam.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-20 11:02:32
// ---- Program Info End  ----

#include <iostream>
using namespace std;

class B0{
    public:
        void print(){
            cout<<"BO::print()"<<endl;
        }
        virtual void display(){
            cout<<"B0::display()"<<endl;
        }
};
class B1:public B0{
    public:
        void print(){
            cout<<"B1::print()"<<endl;
        }
        void display(){
            cout<<"B1::display()"<<endl;
        }
};
class D1:public B1{
    public:
        void print(){
            cout<<"D1::print()"<<endl;
        }
        void display(){
            cout<<"D1::display()"<<endl;
        }
};

void fun(B0 *p){
    p->print();
    p->display();
}

int main(int argc, char *argv[])
{
    B0 b0,*p;
    B1 b1;
    D1 d1;
    p=&b0;
    fun(p);
    p=&b1;
    fun(p);
    p=&d1;
    fun(p);
    fun(&d1);
    return 0;
}
