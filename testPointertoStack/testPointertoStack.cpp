// ---- Program Info Start----
//FileName:     testPointertoStack.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-30 18:27:24
// ---- Program Info End  ----

#include<stdio.h>
char *myString()
{
    char buffer[6] = {0};
    char * ptr = buffer;
    char *s = "Hello World!";
    for (int i = 0; i < sizeof(buffer) - 1; i++)
    {
        buffer[i] = *(s + i);
    }
    //printf("%s\n", buffer);
    return ptr;
}
int main(int argc, char **argv)
{
    printf("%s\n", myString());
    return 0;
}
