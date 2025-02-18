#include<stdio.h>
int main()
{
    int a, b, op;
    scanf("%d%d%c", &a, &b, &op);
    if(op=="+")
    printf("%d", a+b);
    else if(op=="-")
    printf("%d", a-b);
    else if(op=="*")
    printf("%d", a*b);
    else if(op=="/")
    printf("%d", a/b);
    else
    printf("Not an operator");
}