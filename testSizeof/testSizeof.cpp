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
extern "C"{
#include <stdlib.h>
}

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
struct S7{//0
    char a[0];//0 Length Array
};
struct S8{//1

};

//Test 0 Length Array
struct SS1{//16
    int length;
    char *ptr;
};
struct SS2{//4
    int length;
    char arr[0];
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
    cout<<"sizeof(S8): "<<sizeof(S8)<<endl;

    //Reference
    char & refToChar = variableChar;

    cout<<"sizeof(refToChar): "<<sizeof(refToChar)<<"--"<<static_cast<const void*>(&refToChar)<<endl;
    refFoo(variableChar);

    //0 Length Array;
    char arrChar [0];
    struct SS1 *var1;
    struct SS2 *var2;
    cout<<"sizeof(arrChar): "<<sizeof(arrChar)<<endl;
    cout<<"sizeof(SS1): "<<sizeof(SS1)<<endl;
    cout<<"sizeof(SS2): "<<sizeof(SS2)<<endl;
    var1 = new struct SS1();
    var1->length = 3;
    var1->ptr = new char[3];
    var1->ptr = "Hi";
    cout<<"Var1->ptr: "<<var1->ptr<<endl;
    cout<<"Var1 address: "<<var1<<" var1+1 address: "<<var1+1<<" var1->length address: "<<&(var1->length)<<" var1->ptr address: "<<static_cast<const void*>(var1->ptr)<<" var1->ptr+1 address: "<<static_cast<const void*>(var1->ptr+1)<<endl;
    var2 = (struct SS2 *) malloc(sizeof(SS2)+3);
    var2->length = 3;
    var2->arr[0] = 'H';
    var2->arr[1] = 'i';
    var2->arr[2] = '\0';
    cout<<"Var2->arr: "<<var2->arr<<endl;
    cout<<"Var2 address: "<<var2<<" var2+1 address: "<<var2+1<<" var2->length address: "<<&(var2->length)<<" var2->arr address: "<<static_cast<const void*>(var2->arr)<<" var2->arr+1 address: "<<static_cast<const void*>(var2->arr+1)<<endl;

    //Run-time Featur(After C99)
    int n = 5;
    char arrDyChar[n];
    cout<<"sizeof(arrDyChar[n]): "<<sizeof(arrDyChar)<<endl;

    return 0;
}
