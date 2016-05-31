// ---- Program Info Start----
//FileName:     testCoversion.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-25 09:28:56
// ---- Program Info End  ----

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
    //float -> bool
    float f_false = 0.0, f_true = 1.0;
    if(f_false){ //false
        cout<<"f_false -> true "<<endl;
    }else{
        cout<<"f_false -> false "<<endl;
    }
    if(f_true){ //true
        cout<<"f_true -> true "<<endl;
    }else{
        cout<<"f_true -> false "<<endl;
    }

    //整形变换
    signed char sc_a = 0xe0;//-32
    unsigned char uc_a = sc_a;//224
    printf("signed char :%d, unsigned char: %d \n", sc_a, uc_a);

    if(sc_a == uc_a){ //false
        cout<<"signed char is equal to unsigned char"<<endl;
    }else{
        cout<<"signed char is not equal to unsigned char"<<endl;
    }

    if(sc_a < uc_a){ //True sc_a 通过movsbl 符号位扩展为 int类型, 0xFFFFFFE0
        // uc_a 通过movzbl 0扩展为 int类型 0x000000E0
        cout<<"signed char is smaller than  unsigned char"<<endl;
    }else if(sc_a > uc_a){
        cout<<"signed char is bigger than to unsigned char"<<endl;
    }

    //unsigned int  and  signed int
    unsigned int ui_a = 0xFFFFFFE0;
    signed int si_a = 0xFFFFFFE0;

    if(si_a == ui_a){ //True si_a转换成 unsigned int
        cout<<"signed int is equal to unsigned int"<<endl;
    }else{
        if(si_a < ui_a){
            cout<<"signed int is smaller than  unsigned int"<<endl;
        }else if(si_a > ui_a){
            cout<<"signed int is bigger than to unsigned int"<<endl;
        }
    }

    //unsigned int  and  signed int
    unsigned int ui_a_1 = 1;
    signed int si_a_1 = -1;

    if(si_a_1 == ui_a_1){ //True si_a转换成 unsigned int
        cout<<"signed int is equal to unsigned int"<<endl;
    }else{
        if(si_a_1 < ui_a_1){
            cout<<"signed int(-1) is smaller than  unsigned int(1)"<<endl;
        }else if(si_a_1 > ui_a_1){
            cout<<"signed int(-1) is bigger than to unsigned int(1)"<<endl;
        }
    }

    // long bit int to short bit int
    unsigned short us_a = 0xFFe0;
    unsigned char uc_aa = us_a; //0xE0
    signed char sc_aa = us_a;//0xE0
    //对于long to short， 无论目标是unsigned 还是signed，编译器都采用高位截断的策略
    printf("unsigned char (contain unsigned short) is: %d, signed char (contain unsigned short) is: %d\n", uc_aa, sc_aa);

    // parameter conversion
    printf("sizeof 'a' = %d", sizeof 'A');



    return 0;
}
