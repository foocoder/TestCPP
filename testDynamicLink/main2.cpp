// ---- Program Info Start----
//FileName:     main2.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-24 11:15:19
// ---- Program Info End  ----

#include <stdio.h>
#include <dlfcn.h>

#define print(x) printf(#x "=%d\n",x)

//int fun(int, int);
//int fun1(int, int);

int main(int argc, char *argv[])
{
    void * handle;
    char * error;
    int (* fun)( int, int );
    int (* fun1)( int, int );
    int a = 5, b=5;

    handle = dlopen("./libcalc.so", RTLD_LAZY);
    if( !handle ){
        printf("%s\n", dlerror());
        return -1;
    }

    fun = (int (*)(int,int))dlsym(handle, "fun");
    if( (error=dlerror()) != NULL ){
        printf("%s\n", error);
        return -1;
    }

    fun1 = (int (*)(int, int))dlsym(handle, "fun1");
    if( (error=dlerror()) != NULL ){
        printf("%s\n", error);
        return -1;
    }

    print(fun(a,b));
    print(fun1(a,b));
    scanf("%d %d", &a, &b);
    print(fun(a,b));
    print(fun1(a,b));

    if(dlclose(handle)<0){
         printf("%s\n",dlerror());
         return -1;
    }
    return 0;
}
