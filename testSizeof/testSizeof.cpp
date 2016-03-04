// ---- Program Info Start----
//FileName:     testSizeof.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-04 14:20:20
// ---- Program Info End  ----

#include <iostream>

using namespace std;

void voidFoo(){}

int intFoo(){return 0;}

int * ptrIntFoo(){
    int a = 0;
    int *ptrIntA = & a;
    return ptrIntA;
}

void refFoo(char & a){
    cout<<"sizeof(a): "<<sizeof(a)<<"--"<<static_cast<const void*>(&a)<<"--"<<endl;
}

struct S1{//24
    char a;
    double b;
    int c;
};
struct S2{//16
    char a;
    char c;
    double b;
};
struct S3{//40
    char a;
    struct S1 s;
    char b;
};
struct S4{//32
    char a;
    char b;
    struct S1 s;
};
struct S5{//2
    char a:3;
    char b:4;
    char c:5;
};
struct S6{//8
    char a:7;
    int b:31;
    char c:1;
};
struct S7{//1
    char a;
};

int main(int argc, char *argv[])
{
    //Three Type of sizeof
    char variableChar;
    cout<<"sizeof(char): "<<sizeof(char)<<endl;
    cout<<"sizeof(variableChar): "<<sizeof(variableChar)<<"--"<<static_cast<const void*>(&variableChar)<<endl;
    cout<<"sizeof variableChar: "<<sizeof variableChar <<endl;
    //cout<<"sizeof Char: "<<sizeof char <<endl; // Cant sizeof type_name;

    //Function sizeof
    cout<<"sizeof(intFoo()): "<<sizeof(intFoo())<<endl;
    cout<<"sizeof(ptrIntFoo()): "<<sizeof(ptrIntFoo())<<endl;
    cout<<"sizeof(*ptrIntFoo()): "<<sizeof(*ptrIntFoo())<<endl;
    //cout<<"sizeof(intFoo)"<<sizeof(intFoo)<<endl; // Cant sizeof(function) Type
    //cout<<"sizeof(voidFoo())"<<sizeof(voidFoo())<<endl; // Cant sizeof(void) Type

    //Pointer and Arrays
    void * ptrVariableVoid;
    char * ptrVariableChar;
    char arrVariableChar[3];
    char * dyPtrVariableChar = new char[10];

    cout<<"sizeof(ptrVariableVoid): "<<sizeof(ptrVariableVoid)<<endl;
    //cout<<"sizeof(*ptrVariableVoid): "<<sizeof(*ptrVariableVoid)<<endl; // error: Type of (* ptr) is Void;
    cout<<"sizeof(ptrVariableChar): "<<sizeof(ptrVariableChar)<<endl;
    cout<<"sizeof(*ptrVariableChar): "<<sizeof(*ptrVariableChar)<<endl;
    cout<<"sizeof(arrVariableChar): "<<sizeof(arrVariableChar)<<endl;
    cout<<"sizeof(*arrVariableChar): "<<sizeof(*arrVariableChar)<<endl;
    cout<<"sizeof(dyPtrVariableChar): "<<sizeof(dyPtrVariableChar)<<endl;
    cout<<"sizeof(*dyPtrVariableChar): "<<sizeof(*dyPtrVariableChar)<<endl;
    cout<<"sizeof(*dyPtrVariableChar+1): "<<sizeof(*dyPtrVariableChar+1)<<endl;
    cout<<"sizeof(*(dyPtrVariableChar+1)): "<<sizeof(*(dyPtrVariableChar+1))<<endl;

    delete dyPtrVariableChar;

    //Struct
    cout<<"sizeof(S1): "<<sizeof(S1)<<endl;
    cout<<"sizeof(S2): "<<sizeof(S2)<<endl;
    cout<<"sizeof(S3): "<<sizeof(S3)<<endl;
    cout<<"sizeof(S4): "<<sizeof(S4)<<endl;
    cout<<"sizeof(S5): "<<sizeof(S5)<<endl;
    cout<<"sizeof(S6): "<<sizeof(S6)<<endl;
    cout<<"sizeof(S7): "<<sizeof(S7)<<endl;

    //Reference
    char & refToChar = variableChar;

    cout<<"sizeof(refToChar): "<<sizeof(refToChar)<<"--"<<static_cast<const void*>(&refToChar)<<endl;
    refFoo(variableChar);

    return 0;
}
