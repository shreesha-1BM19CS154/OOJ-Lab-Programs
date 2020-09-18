#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,opt=2,res,stop;
    char opr;
    while(opt=!0){
    printf("Simple Calculator\nEnter two numbers\n");
    scanf(" %d%d",&num1,&num2);
    printf("Choose an operation\n1.Addition(+)\n2.Subtraction(-)\n3.Division(/)\n4.Multiplication(*)\n5.Greater number(>)\n6.Lesser number(<)\n7.equal to(=)\n8.not equal to(=!)\n9.Modulus(%)\n10.increment(++)\n11.STOP(0)\n");
    scanf(" %c",&opr);
    if(opr=='0')
        break;
    switch(opr)
    {case '+' :
        res=num1+num2;
                 break;
      case '-' :
          res=num1-num2;
                 break;
      case '/' :
          res=num1/num2;
                 break;
      case '*' :
          res=num1*num2;
                 break;
      case '>' :
          res=(num1>num2)?num1:num2;
                 break;
      case '<' :
          res=(num1<num2)?num1:num2;
                 break;
      case '=' :
           res=(num1==num2)?1:0;
                 break;
      case '=!':
          res=(num1=!num2)?1:0;
                 break;
      case '%' :
          res=num1%num2;
                 break;
      case '++':
          res=num1++;
                 break;
    }

     printf("Result is %d\n\n" ,res);

   }
    return 0;
}
