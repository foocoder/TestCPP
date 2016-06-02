// ---- Program Info Start----
//FileName:     testConstCharAndConstString.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-02 19:15:23
// ---- Program Info End  ----

#include <cstdio>

int main(int argc, char *argv[])
{
    //Test1
    char * ptrStr = "Hello";
    if(ptrStr == "Hello")
        printf("ptrStr == \"Hello\"\n");
    else
        printf("ptrStr != \"Hello\"\n");

    //Test2
    //表明由 cptrChar所指的区域为只读， 不能通过cptrChar来修改
    const char * cptrChar = "World";
    char arrStr[] = "World";
    cptrChar = arrStr;
    //cptrChar[0] = "w"; // Compile Error, Read-Only Area;
    //cptrChar[1] = "O";// Compile Error, Read-Only Area;

    return 0;
}
