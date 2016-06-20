// ---- Program Info Start----
//FileName:     testArrayVSPointer.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-27 19:25:27
// ---- Program Info End  ----

#include <cstdio>

struct str{
    int len;
    char s[0];
};

struct foo{
    struct str * a;
};

struct test{
    int i;
    short c;
    char *p;
    char s[10];
    char z[0];
};

int main(int argc, char *argv[])
{
    //int a[10] ;
    //int * pointer = a;
    //int b;
    //b = a[1];
    //b = pointer[1];

    struct foo f = {0};
    if(f.a->s){
        printf("%x\n",f.a->s);
        //printf(f.a->s);
    }

    struct test *pt = NULL;
    printf("&i = %x\n", &pt->i);
    printf("&c = %x\n", &pt->c);
    printf("&p = %x\n", &pt->p);
    printf("&s = %x\n", pt->s);
    printf("&z = %x\n", pt->z);


    return 0;
}
