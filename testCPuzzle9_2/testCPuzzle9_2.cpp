// ---- Program Info Start----
//FileName:     testCPuzzle9_2.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-21 18:42:29
// ---- Program Info End  ----

#include <cstdio>

#define weeks(mins) (days(mins)/7)
#define days(mins) (hours(mins)/24)
#define hours(mins) (mins/60)
#define mins(secs) (secs/60)

#define PRINT(a) printf(#a " = %d\n", (int) (a))
#define TRACE(x) if(traceon) printf("Trace: "), PRINT(x)

#define g(a,b) a a ## b(nd)
#define oo "th"
#define oodbye(a) "e e" # a

int traceon;
int main(int argc, char *argv[])
{
    {
        PRINT(weeks(10080));
        PRINT(days(mins(86400)));
    }
    {
        int i;
        traceon = 1;
        for(i=20; i>0; i/=2){
            if(i<10) TRACE(i);
            else puts("not yet");
        }
    }
    {
        puts( g(oo, dbye) );
    }
    return 0;
}
