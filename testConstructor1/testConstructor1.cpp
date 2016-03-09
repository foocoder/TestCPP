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
        cout<<"Based::Default Constructor was Invoked!"<<endl;
    }
    Based(int t):integer(t){
        cout<<"Based::Constructor with a parameter was Invoked!"<<endl;
    }
    Based(const Based &rhs):integer(rhs.integer){
        cout<<"Based::Copy constructor was Invoked!"<<endl;
    }
    Based & operator=(const Based &rhs){
        integer = rhs.integer;
        cout<<"Based::Assign Operator was Invoked!"<<endl;
        return *this;
    }
        int integer;
};

class Complexed{
    public:
        Complexed():m_base(),integer(0){
            cout<<"Complexed::Default Constructor was Invoked!"<<endl;
        }
        Complexed(const Based & rhs, int i){
            m_base = rhs;
            integer = i;
            cout<<"Complexed::Constructor with two parameter was Invoked!"<<endl;
        }
        Complexed(const Based & rhs): m_base(rhs),integer(0){
            cout<<"Complexed::Constructor with a parameter was Invoked!"<<endl;
        }
        Complexed(const Complexed & rhs):m_base(rhs.m_base),integer(rhs.integer){//Why Here Can use rhs.m_base and rhs.integer in condition of private?
            cout<<"Complexed::Copy constructor was Invoked!"<<endl;
        }
        Complexed & operator=(const Complexed &rhs){//Assign Operator, Not Constructor!
            integer = rhs.integer;
            m_base  = rhs.m_base;
            cout<<"Complexed::Assign Operator was Invoked!"<<endl;
            return *this;
        }
    private:
        Based m_base;
        int integer;
};

int main(int argc, char *argv[])
{
    /* Test Simple Class****
    //Test Different Constructor;
    Based A;
    A = 10;
    cout<<"---A---"<<endl;
    Based B = Based();
    cout<<"---B---"<<endl;
    Based C;
    C = B;
    cout<<"---C---"<<endl;
    Based D(C);
    cout<<"---D---"<<endl;
    Based G = C;
    cout<<"---G---"<<endl;
    Based * E = new Based;
    cout<<"---E---"<<endl;
    Based * F = new Based();
    cout<<"---F---"<<endl;
    Based * pA;
    cout<<"---pA---"<<endl;

    //Test The Memory of Objects;
    cout<<"A: "<<&A<<"\tsizeof "<<sizeof(A)<<"\tinteger:"<<&A.integer<<"\n"\
        <<"B: "<<&B<<"\tsizeof "<<sizeof(B)<<"\tinteger:"<<&B.integer<<"\n"\
        <<"C: "<<&C<<"\tsizeof "<<sizeof(C)<<"\tinteger:"<<&C.integer<<"\n"\
        <<"D: "<<&D<<"\tsizeof "<<sizeof(D)<<"\tinteger:"<<&D.integer<<"\n"\
        <<"E: "<<&E<<"\tsizeof "<<sizeof(*E)<<"\tinteger:"<<&E->integer<<"\n"\
        <<"F: "<<&F<<"\tsizeof "<<sizeof(*F)<<"\tinteger:"<<&F->integer<<"\n";
    delete E;
    delete F;
    **/

    //Test Complexed Class
    Based baseA;
    cout<<"---baseA---"<<endl;
    Complexed A;
    cout<<"---A---"<<endl;
    Complexed B = A;
    cout<<"---B---"<<endl;
    Complexed C;
    C = B;
    cout<<"---C---"<<endl;
    Complexed D = baseA;
    cout<<"---D---"<<endl;
    Complexed E = Complexed(baseA,0);
    cout<<"---E---"<<endl;
    return 0;
}
