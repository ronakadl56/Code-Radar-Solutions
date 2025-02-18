#include<stdio.h>
int main()
{
    int a, b, c;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &op);
    if(op == '+'){
        c=a+b;
        printf("%d\n", c);
    
    }
    else if(op == '-'){
        c=a-b;
        printf("%d/n", c);
    
    }
    else if(op == '*'){
        c=a*b;
        printf("%d/n", c);
    
    }
    else if(op == '/'){
        c=a/b;
        printf("%d/n", c);
        
    }
}    