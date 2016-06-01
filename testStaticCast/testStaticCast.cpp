// ---- Program Info Start----
//FileName:     testStaticCast.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-01 10:51:20
// ---- Program Info End  ----

#include <iostream>
#include <stdio.h>

using namespace std;

class A{
    public:
        A():_val(0){}
        virtual ~A(){}
        virtual void funcA(){}
        long int _val;
};
class B{
    public:
        virtual void funcB(){}
};
class C:public A, public B{
    public:
};

int main(int argc, char *argv[])
{
    //注：内存模型如下，只列出地址后16bit
    //obj 地址0x7a80;
    //pA 0x7a80; Class A的vptr,8字节
    //pB 0x7a90; Class B的vptr,8字节
    //pC 0X7a80;
    C obj;
    A * pA = &obj,* pA2, *pA3;
    B * pB = &obj;
    C * pC = &obj;

    printf("pA=%p, pB=%p, pC=%p, pC+1=%p, static_cast<void *>pB=%p\n", pA,pB,pC,pC+1,static_cast<void*>(pB));

    //pA2 = pB; //Compile Error!
    //pA2 = static_cast<A *> (pB); //Compile Error!
    pA2 = static_cast<A *> (static_cast<C *>(pB));   // 将指针移动到0x7a80;
    pA3 = static_cast<A *> (static_cast<void *>(pB)); //指针仍然是0x7a90;不安全
    printf("pA2=%p, pA3=%p\n", pA2,pA3);
    printf("pA2->val=%ld,pA3->_val=%ld",pA2->_val,pA3->_val); //两个值不相等


    return 0;
}
