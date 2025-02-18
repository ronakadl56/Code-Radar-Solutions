#include<stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &op);
    if(op=='+'){
    printf("%d\n", a+b);
    }
    else if(op=='-'){
    printf("%d\n", a-b);
    }
    else if(op=='*'){
    printf("%d\n", a*b);
    }
    else if(op=='/'){
    printf("%d\n", a/b);
    }
    }