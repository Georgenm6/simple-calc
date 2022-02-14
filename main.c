
/*
Simple Calculator
by GEORGE MBUGUA
on Feb 2022
MIT license
C89 compiler
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    float quot;
    char name[100];
    int n1,n2,sum,diff,product;
    printf("Simple Calculator!\n");
    //capture input
    printf("Enter your name:");
    gets(name);
    printf("Enter two integers");
    scanf("%d %d",&n1,&n2);
    //computations
    sum = n1+n2;
    diff =n1-n2;
    product =n1*n2;
    quot =(float)n1/n2;

    //outputs

    printf("Hey %s, here is your results:\n",name);
    printf("%d + %d= %6d\n",n1,n2,sum);
    printf("%d - %d= %6d\n",n1,n2,diff);
    printf("%d *%d= %6d\n",n1,n2,product);
    printf("%d / %d= %6f\n",n1,n2,quot);


    return 0;
}
