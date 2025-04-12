#include <stdio.h>

int main()
{
    float p, r, t, si; //ese hamare 3 containers create ho gae.
    printf("Enter Principal Amount : ");
    scanf("%f", &p) ;
    printf("Enter Rate : ");
    scanf("%f", &r) ;
    printf("Enter time : ");
    scanf("%f", &t) ;
    si = p*r*t/100;
    printf("Simple Inteset is : %f", si);
    return 0;

}