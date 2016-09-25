// ---- Program Info Start----
//FileName:     testVirtualDerviedObjectMemory.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-25 15:52:31
// ---- Program Info End  ----

#include <iostream>
using namespace std;
class B
{
    public:
        long ib;
        long cb;
    public:
        B():ib(0),cb('B') {}

        virtual void f() { cout << "B::f()" << endl;}
        virtual void Bf() { cout << "B::Bf()" << endl;}
};
class B1 :  public B
{
    public:
        long ib1;
        long cb1;
    public:
        B1():ib1(11),cb1('1') {}

        virtual void f() { cout << "B1::f()" << endl;}
        virtual void f1() { cout << "B1::f1()" << endl;}
        virtual void Bf1() { cout << "B1::Bf1()" << endl;}

};
class B2:  public B
{
    public:
        long ib2;
        long cb2;
    public:
        B2():ib2(12),cb2('2') {}

        virtual void f() { cout << "B2::f()" << endl;}
        virtual void f2() { cout << "B2::f2()" << endl;}
        virtual void Bf2() { cout << "B2::Bf2()" << endl;}

};

class D : public B1, public B2
{
    public:
        long id;
        long cd;
    public:
        D():id(100),cd('D') {}

        virtual void f() { cout << "D::f()" << endl;}
        virtual void f1() { cout << "D::f1()" << endl;}
        virtual void f2() { cout << "D::f2()" << endl;}
        virtual void Df() { cout << "D::Df()" << endl;}

};

int main(int argc, char *argv[])
{
    typedef void(*Fun)(void);
    long** pVtab = NULL;
    Fun pFun = NULL;

    D d;
    pVtab = (long**)&d;
    cout << "[0] D::B1::_vptr->" << endl;
    pFun = (Fun)pVtab[0][0];
    cout << "     [0] ";    pFun();
    pFun = (Fun)pVtab[0][1];
    cout << "     [1] ";    pFun();
    pFun = (Fun)pVtab[0][2];
    cout << "     [2] ";    pFun();
    pFun = (Fun)pVtab[0][3];
    cout << "     [3] ";    pFun();
    pFun = (Fun)pVtab[0][4];
    cout << "     [4] ";    pFun();
    pFun = (Fun)pVtab[0][5];
    cout << "     [5] 0x" << pFun << endl;

    cout << "[1] B::ib = " << (long)pVtab[1] << endl;
    cout << "[2] B::cb = " << (char)pVtab[2] << endl;
    cout << "[3] B1::ib1 = " << (long)pVtab[3] << endl;
    cout << "[4] B1::cb1 = " << (char)pVtab[4] << endl;

    cout << "[5] D::B2::_vptr->" << endl;
    pFun = (Fun)pVtab[5][0];
    cout << "     [0] ";    pFun();
    pFun = (Fun)pVtab[5][1];
    cout << "     [1] ";    pFun();
    pFun = (Fun)pVtab[5][2];
    cout << "     [2] ";    pFun();
    pFun = (Fun)pVtab[5][3];
    cout << "     [3] ";    pFun();
    pFun = (Fun)pVtab[5][4];
    cout << "     [4] 0x" << pFun << endl;

    cout << "[6] B::ib = " << (long)pVtab[6] << endl;
    cout << "[7] B::cb = " << (char)pVtab[7] << endl;
    cout << "[8] B2::ib2 = " << (long)pVtab[8] << endl;
    cout << "[9] B2::cb2 = " << (char)pVtab[9] << endl;

    cout << "[10] D::id = " << (long)pVtab[10] << endl;
    cout << "[11] D::cd = " << (char)pVtab[11] << endl;
    return 0;
}
