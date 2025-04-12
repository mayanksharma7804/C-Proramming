#include <stdio.h>
int main(){
    float p;
    printf("Enter the Percentage : ");
    scanf("%f", &p);
    if (p>91){
        printf("Excellent");
    }
    else if (p>81)
    {
        printf("Very Good");
    }
    else if (p>71)
    {
        printf("Good");
    }
    else if (p>61)
    {
        printf("Can do better");
    }
    else if (p>51)
    {
        printf("Average");
    }
    else if (p>41)
    {
        printf("Below Average");
    }
    else printf("Fail");
    return 0;
}