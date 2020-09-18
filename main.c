#include <stdio.h>
#include <stdlib.h>
float sumavr(int , int);
void printeven(int ,int);
int main()
{
    int a,b,c,l1,l2;
    float avr;
    printf("Enter three numbers\n");
    scanf(" %d%d%d",&a,&b,&c);
    l1=(a>b)?((a>c)?a:c):((b>c)?b:c);
   if(a >= b && a >= c)
    {
        if(b >= c)
        {


            l2=b;
        }
        else
        {
          l2=c;
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            l2=a;
        }
        else
        {
           l2=c;
        }
    }


    else if(a >= b)
    {
        l2=a; }
    else
    {
       l2=b;
    }
    printf("The two largest numbers are %d %d\n",l1,l2);
    avr=sumavr(l1,l2);
    printf("Average of two largest number is %f\n",avr);
    printeven(l2,l1);
    return 0;
}

float sumavr(int a,int b)
{
    float avr;
    int sum;
    sum=a+b;
    avr=sum/2.0;
    printf("The sum is %d\n",sum);
    return avr;
}

void printeven(int a , int b)
{   int even,i;
    printf("The even numbers between %d and %d are\n",a,b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}
