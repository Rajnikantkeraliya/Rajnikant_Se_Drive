#include<stdio.h>
void main ()
{
    int num,reversenumber=0,reminder=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        reminder=num%10;
        reversenumber=reversenumber*10+reminder;
        num/=10;
    }
    printf("reversenumber is:%d\n",reversenumber);
}