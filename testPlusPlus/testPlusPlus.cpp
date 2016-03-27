// ---- Program Info Start----
//FileName:     testPlusPlus.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-09 14:54:39
// ---- Program Info End  ----

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
//int i=3,j=3,k=3,l=3,m=3,n=3,result1,result2,result3,result4,result5,result6;
    //result1=(++i)+(++i);
    //printf("i = 3\n");
    //printf("result1= (++i)+(++i) = %d\n\n",result1);

    //result2=(j++)+(j++);
    //printf("j = 3\n");
    //printf("result2= (j++)+(j++) = %d\n\n",result2);

    //result3=(++k)+(++k)+(++k);
    //printf("k = 3\n");
    //printf("result3= (++k)+(++k)+(++k) = %d\n\n",result3);

    //result4=(++l)+(++l)+(l++);
    //printf("l = 3\n");
    //printf("result4= (++l)+(++l)+(l++) = %d\n\n",result4);

    //result5=(m++)+(m++)+(m++);
    //printf("m = 3\n");
    //printf("result5=(m++)+(m++)+(m++) = %d\n\n",result5);

    //result6=(n++)+(++n)+(n++);
    //printf("n = 3\n");
    //printf("result6=(n++)+(++n)+(n++) = %d\n\n",result6);
    char str[] = "xyabcd";
    char * pa = str;
    char * pb = pa;
    *pa++ = *pb++;
    cout<<str;
    return 0;
}
