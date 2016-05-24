// ---- Program Info Start----
//FileName:     testTypeInfo.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-24 13:24:10
// ---- Program Info End  ----

#include <iostream>
#include <typeinfo>

using namespace std;

class A{

};

class B:public A{

};

class C:public B{

};

int main(int argc, char *argv[])
{
    if( typeid(int).before(typeid(char)) ){
        cout<<"typeinfo of int is before char"<<endl;
    }else if(typeid(char).before(typeid(int))){
        cout<<"typeinfo of char is before int"<<endl;
    }else{
        cout<<"there is no before after between int and char"<<endl;
    }

    if( typeid(A).before(typeid(B)) ){
        cout<<"A before B"<<endl;
    }else if( typeid(B).before(typeid(A)) ){
        cout<<"B before A"<<endl;
    }else{
        cout<<"There is no before after between A and B"<<endl;
    }

    if( typeid(B).before(typeid(C)) ){
        cout<<"B before C"<<endl;
    }else if( typeid(C).before(typeid(B)) ){
        cout<<"C before B"<<endl;
    }else{
        cout<<"There is no before after between B and C"<<endl;
    }

    if( typeid(B).before(typeid(B)) ){
        cout<<"B before B"<<endl;
    }else{
        cout<<"B is not before B"<<endl;
    }
    return 0;
}
