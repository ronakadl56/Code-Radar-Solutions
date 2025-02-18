#include<stdio.h>
int main()
{
    int a, b, c;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &op);
    if(op == '+'){
    printf("%d\n", a+b);
    }
    else if(op == '-'){
    printf("%d\n", a-b);
    }
    else if(op == '*'){
    printf("%d\n", a*b);
    }
    else if(op == '/'){
        if(b!=0){
            c=a/b;
            printf("%d", c);
        }
        else{
            printf("Error");
        }
    }
    else{
        printf("Invalid Operator");
    }
    }