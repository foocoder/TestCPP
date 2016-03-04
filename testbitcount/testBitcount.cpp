// ---- Program Info Start----
//FileName:     testBitcount.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-02-12 10:59:06
// ---- Program Info End  ----

#include <iostream>
#include <ctime>
#include <nmmintrin.h>

using namespace std;
#define RUNNUMBER 0xFFFFFF

//普通法
int Fn_BitCount_Normal(unsigned n){
    unsigned int c =0 ; // 计数器
    while (n >0)
    {
        //if((n &1) ==1) // 当前位是1
            //++c ; // 计数器加1
        c += n&1;
        n >>=1 ; // 移位
    }
    return c ;
}

//普通法精简版
int Fn_BitCount_Normal_Simplify(unsigned n){
    unsigned int c =0 ; // 计数器
    for (c =0; n; n >>=1) // 循环移位
        c += n &1 ; // 如果当前位是1，则计数器加1
    return c ;
}

//快速法
int Fn_BitCount_Fast(unsigned n){
    unsigned int c =0 ;
    for (c =0; n; ++c)
    {
        n &= (n -1) ; // 清除最低位的1
    }
    return c ;
}

//查表法-动态建表
int Fn_BitCount_Dynamic_Table(unsigned n){
    // 建表
    unsigned char BitsSetTable256[256] = {0} ;

    // 初始化表
    for (int i =0; i <256; i++)
    {
        BitsSetTable256[i] = (i &1) + BitsSetTable256[i /2];
    }

    unsigned int c =0 ;

    // 查表
    unsigned char* p = (unsigned char*) &n ;

    c = BitsSetTable256[p[0]] +
        BitsSetTable256[p[1]] +
        BitsSetTable256[p[2]] +
        BitsSetTable256[p[3]];

    return c ;
}

//查表法-静态表-4bit
unsigned char table4[16] =
{
    0, 1, 1, 2,
    1, 2, 2, 3,
    1, 2, 2, 3,
    2, 3, 3, 4
} ;
int Fn_BitCount_Static_Table_4(unsigned n){
    //unsigned char table4[16] =
    //{
        //0, 1, 1, 2,
        //1, 2, 2, 3,
        //1, 2, 2, 3,
        //2, 3, 3, 4
    //} ;

    unsigned int count =0 ;
    while (n)
    {
        count += table4[n &0xf] ;
        n >>=4 ;
    }
    return count ;
}

//查表法-静态表-8Bit
unsigned char table8[256] =
{
    0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8,
};
int Fn_BitCount_Static_Table_8(unsigned n){
    //unsigned char table8[256] =
    //{
        //0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4,
        //1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
        //1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
        //1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
        //2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
        //3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
        //3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
        //4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8,
    //};

    return table8[n &0xff] +
        table8[(n >>8) &0xff] +
        table8[(n >>16) &0xff] +
        table8[(n >>24) &0xff] ;
}

//平行计算法
int Fn_BitCount_Parallel(unsigned n){
    n = (n &0x55555555) + ((n >>1) &0x55555555) ;
    n = (n &0x33333333) + ((n >>2) &0x33333333) ;
    n = (n &0x0f0f0f0f) + ((n >>4) &0x0f0f0f0f) ;
    n = (n &0x00ff00ff) + ((n >>8) &0x00ff00ff) ;
    n = (n &0x0000ffff) + ((n >>16) &0x0000ffff) ;

    return n ;
}

//完美法
int Fn_BitCount_Perfect(unsigned n){
    unsigned int tmp = n - ((n >>1) &033333333333) - ((n >>2) &011111111111);
    return ((tmp + (tmp >>3)) &030707070707) %63;
}

//位标志法
struct _byte{
    unsigned a:1;
    unsigned b:1;
    unsigned c:1;
    unsigned d:1;
    unsigned e:1;
    unsigned f:1;
    unsigned g:1;
    unsigned h:1;
};
int Fn_BitCount_BitFlags(unsigned n){
    int c = 0;
    unsigned char* p = (unsigned char*) &n ;
    struct _byte *by[] = {(struct _byte *) &p[0],
                          (struct _byte *) &p[1],
                          (struct _byte *) &p[2],
                          (struct _byte *) &p[3]};
    c += by[0]->a + by[0]->b + by[0]->c + by[0]->d + by[0]->e + by[0]->f + by[0]->g + by[0]->h;
    c += by[1]->a + by[1]->b + by[1]->c + by[1]->d + by[1]->e + by[1]->f + by[1]->g + by[1]->h;
    c += by[2]->a + by[2]->b + by[2]->c + by[2]->d + by[2]->e + by[2]->f + by[2]->g + by[2]->h;
    c += by[3]->a + by[3]->b + by[3]->c + by[3]->d + by[3]->e + by[3]->f + by[3]->g + by[3]->h;
    return c;
}

//SSE4指令-32bit
int Fn_BitCount_SSE4_32(unsigned n){
    return _mm_popcnt_u32(n);
}

//SSE4指令-64bit
int Fn_BitCount_SSE4_64(unsigned n){
    return _mm_popcnt_u64(n);
}

int main(int argc, char *argv[])
{
    int result = 0;
    clock_t start, end;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Normal(i);
    end = clock();
    cout<<"Fn_BitCount_Normal Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Normal_Simplify(i);
    end = clock();
    cout<<"Fn_BitCount_Normal_Simplify Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Fast(i);
    end = clock();
    cout<<"Fn_BitCount_Fast Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Dynamic_Table(i);
    end = clock();
    cout<<"Fn_BitCount_Dynamic_Table Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Static_Table_4(i);
    end = clock();
    cout<<"Fn_BitCount_Static_Table_4 Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Static_Table_8(i);
    end = clock();
    cout<<"Fn_BitCount_Static_Table_8 Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Parallel(i);
    end = clock();
    cout<<"Fn_BitCount_Parallel Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_Perfect(i);
    end = clock();
    cout<<"Fn_BitCount_Perfect Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_SSE4_32(i);
    end = clock();
    cout<<"Fn_BitCount_SSE4_32 Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_SSE4_64(i);
    end = clock();
    cout<<"Fn_BitCount_SSE4_64 Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    result = 0;
    start = clock();
    for(int i=0; i<RUNNUMBER; i++)
        result += Fn_BitCount_BitFlags(i);
    end = clock();
    cout<<"Fn_BitCount_BitFlags Result: "<<result<<", Time Consuming: "<<(double)(end-start) / CLOCKS_PER_SEC<<" seconds"<<endl;

    return 0;
}
