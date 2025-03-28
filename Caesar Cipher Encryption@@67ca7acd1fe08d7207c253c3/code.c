#include<stdio.h>
#include<string.h>
char *caesarCipher(char str[],int n,char encrypted[]){
    for(int i=0;i<strlen(str);i++){
        encrypted[i]=str[i]+n;
    }
   return encrypted;}