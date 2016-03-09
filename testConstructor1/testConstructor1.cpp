// ---- Program Info Start----
//FileName:     testConstructor1.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-09 19:10:46
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Based{
    public:
    Based():integer(0){
        cout<<"Default Constructor was Invoked!"<<endl;
    }
    Based(int t):integer(t){
        cout<<"Constructor with a parameter was Invoked!"<<endl;
    }
    Based(const Based &rhs):integer(rhs.integer){
        cout<<"Copy constructor was Invoked!"<<endl;
    }
    Based & operator=(const Based &rhs){
        integer = rhs.integer;
        cout<<"Assign Constructor was Invoked!"<<endl;
        return *this;
    }
        int integer;
};

int main(int argc, char *argv[])
{
    //Test Different Constructor;
    Based A;
    A = 10;
    cout<<"---"<<endl;
    Based B = Based();
    cout<<"---"<<endl;
    Based C;
    C = B;
    cout<<"---"<<endl;
    Based D(C);
    cout<<"---"<<endl;
    Based * E = new Based;
    cout<<"---"<<endl;
    Based * F = new Based();
    cout<<"---"<<endl;
    Based * pA = &A;

    //Test The Memory of Objects;
    cout<<"A: "<<pA<<"\tsizeof "<<sizeof(A)<<"\tinteger:"<<&A.integer<<"\n"\
        <<"B: "<<&B<<"\tsizeof "<<sizeof(B)<<"\tinteger:"<<&B.integer<<"\n"\
        <<"C: "<<&C<<"\tsizeof "<<sizeof(C)<<"\tinteger:"<<&C.integer<<"\n"\
        <<"D: "<<&D<<"\tsizeof "<<sizeof(D)<<"\tinteger:"<<&D.integer<<"\n"\
        <<"E: "<<&E<<"\tsizeof "<<sizeof(*E)<<"\tinteger:"<<&E->integer<<"\n"\
        <<"F: "<<&F<<"\tsizeof "<<sizeof(*F)<<"\tinteger:"<<&F->integer<<"\n";
    delete E;
    delete F;
    return 0;
}
