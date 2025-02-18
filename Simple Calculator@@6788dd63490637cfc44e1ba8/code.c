#include<stdio.h>
int main()
{
    int a, b, c;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &op);
    if(op == '+'){
        c=a+b;
        printf("%d", c);
    
    }
    else if(op == '-'){
        c=a-b;
        printf("%d", c);
    
    }
    else if(op == '*'){
        c=a*b;
        printf("%d", c);
    
    }
    else if(op == '/'){
        if(b!=0){
            c=a/b;
            printf("%d", c);
        }
        else{
            printf("error");
        }

    }
    else{
        printf("Invalid Operator");
    }
    return 0;
}    