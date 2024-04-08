#include<stdio.h>

int main()
{
    int a=1,b=0,c;

    
    c= a&&b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);
    
    a=1,b=0,c;
    c= ++a&&b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= ++a&&b++;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= a&&++b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= --a&&++b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= ++a||b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= ++a||++b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);

    a=1,b=0,c;
    c= --a||++b;
    printf("A: %d , B: %d, c: %d \n",a,b,c);
}