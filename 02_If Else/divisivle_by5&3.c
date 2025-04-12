#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n%5==0 && n%3==0)  //&& lagane se no. dono se divisible to he output yes aaega. But agar ham or operator (||) use krte, to kisi ek se bhi hota to bhi output yes aata. 
    {
        printf("Number is divisible by 5 and 3 both.");
    } 
    else {
        printf("Number is not divisible by 5 or 3 or both.");
    }
    return 0;
}

//HEIRARCHY IS LIKE
//&& || B O D/M A/S