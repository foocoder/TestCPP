// ---- Program Info Start----
//FileName:     testConstInClass.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-28 20:06:52
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class A{
    public:
        void FuncConst() const{
            cout<<"A::FuncConst() Invoked!"<<endl;
        }
        void FuncNonConst() {
            cout<<"A::FuncNonConst() Invoked!"<<endl;
        }
};

class B{
    A _a;
    public:
    void FuncConst() const{
        _a.FuncConst();
    }
};

int main(int argc, char *argv[])
{

    return 0;
}
