// ---- Program Info Start----
//FileName:     testDynamicCast.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-24 12:59:54
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Base{
    public:
        virtual ~Base(){} //如果不包含virtual, 会提示类不具备多态属性。
    private:
        int _B_val;
};

class Dervied:public Base{
    private:
        int _D_val;
};

class MostDervied:public Dervied{
    private:
        int _M_val;
};

int main(int argc, char *argv[])
{
    Base * basePtr = new MostDervied;
    if(Dervied * derviedPtr = dynamic_cast<Dervied *> (basePtr)){
        cout<<"Mediate Cast Success!"<<endl; //Success
    }else{
        cout<<"Mediate Cast Failed!"<<endl;
    }

    if(MostDervied * derviedPtr = dynamic_cast<MostDervied *> (basePtr)){
        cout<<"Most Cast Success!"<<endl; //Success
    }else{
        cout<<"Most Cast Failed!"<<endl;
    }
    delete basePtr;
    return 0;
}
