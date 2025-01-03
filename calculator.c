//simple calculator program 
#include <stdio.h>

int main() {
    char opt;
    int a,b;
    printf("chooe (+,-,/,*) operation to perform calculaion");
    scanf("%c",&opt);
    if (opt=='+')
    {
        printf("you choosed addition\n");
    }
    else if (opt=='-')
    {
        printf("you choosed substration\n");
    }
    else if (opt=='*')
    {
         printf("you choosed multiplication\n");
    }
    else if (opt=='/')
    {
        printf("you choosed divisoon\n");
    }
    printf("enter first operands to perform calculation\n");
    scanf("%d",&a);
    printf("enter seconad operands to perform calculation\n");
    scanf("%d",&b);
    switch (opt)
    {
     case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
     case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
     case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
     case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    default:
        printf("you typed a wrong operatot for calculation");
    }
return 0;
}

