#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num = 0x1234;
    int pos = 0;
    __asm__(
        bsf eax,num;
        mov pos,eax;
    );
    cout<<pos<<endl;
    return 0;
}
