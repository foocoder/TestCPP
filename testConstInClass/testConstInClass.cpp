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
        //_a.FuncNonConst();//Error! Can't Compiled!
    }
};

class CTextBlock{
    public:
        //CTextBlock():pText(new char[6]{'H','e','l','l','o','\0'}){}
        const char * getText() const
        { return pText; }
        const char & operator[](size_t position) const
        { return pText[position]; }
        ~CTextBlock(){
            delete[] pText;
        }
    private:
        const char * pText = "Hello";
};

ostream & operator<<(ostream &os, const CTextBlock & rhs){
    os<<rhs.getText();
    return os;
}

int main(int argc, char *argv[])
{

    const CTextBlock cctb;
    //char * pc = &cctb[0];
    //*pc = 'a';
    cctb[0] = 'a';
    cout<<cctb<<endl;
    return 0;
}
