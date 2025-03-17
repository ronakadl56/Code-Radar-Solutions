#include<stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
    if(max==INT_MIN){
        printf("-1");
    }else{
        printf("%d",max);
    }
}