// ---- Program Info Start----
//FileName:     testPointertoConstAssign.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-15 20:13:22
// ---- Program Info End  ----

int main(int argc, char *argv[])
{
    const char * p2Const = "a";
    char * p2NonConst;
    //p2NonConst = p2Const; //Compile Error! Assigning to "char *" from incompatible type "const char *"
    p2Const = p2NonConst;
    return 0;
}
