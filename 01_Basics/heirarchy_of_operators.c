#include <stdio.h>
int main()                                       //working rule will be BO,D/M,A/S 
{
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8 ; //2*(3/4)=1 aa jaega, 5/8=0 will come. // also left to right jaega, 2*3/4 mein se pehle * lagega fir / use hoga
    printf("%d",i);
    return 0;
}


// BODMAS says  () > % > /* > +-