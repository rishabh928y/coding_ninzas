#include <stdio.h>
int main()
{
    int you, me;
    for(you=0;you<=2;you++){
        for(me=1;me<=17;me++){
            if((me>=3-you && me<=6+you)
            || (me>=12-you && me<=15+you))
            printf(" k");
            else
            printf("  ");
        } printf("\n");
    }
    for(you=0;you<9;you++){
        for(me=1;me<=17;me++){
            if(me>you && you<=17-me)
            printf(" l");
            else
            printf("  ");
        }printf("\n");
    }

}