#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int allsame=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            allsame=0;
        }
    }
    if(allsame){
        printf("%d %d",arr[0],arr[1]);
    }else{ for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                
                printf("%d %d\n",arr[i],arr[j]);
                
            }
        }
    }}
   
    return 0;
}