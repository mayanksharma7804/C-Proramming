#include <stdio.h>
int main()
{
    short a = 32767 ; //limit is same like int. Only diff- short ki limit hoti hai ki wo -32768 to 32767 tk he no. store kr skta hai.
    printf("%d", a);
    return 0;
}

// short<long<int<long long        store krne ke liye containers
// short takes 2 bytes = 16 bits  (i.e. 1 byte=8 bits)
// we can store 2^n nos. in n bits
// therefore in 16 bits, we can store 2^16 numbers
// bytes kb Mb Gb Tb 
// int takes 4 bytes i.e. 32 bits. i.e. it stores 2^32 nos.
// long takes 8 bytes i.e. 64 bits. i.e. it stores 2^64 nos.
// character takes only 1 byte i.e. 8 bits