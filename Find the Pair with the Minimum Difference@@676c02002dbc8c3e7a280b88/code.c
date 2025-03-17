#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int a = arr[0], b = arr[1];
    int min = abs(arr[1] - arr[0]);
    if(n<=1){
        printf("-1");
    }else{
        for (int i = 1; i < n - 1; i++) {
        if (abs(arr[i] - arr[i + 1]) < min) {
            min = abs(arr[i] - arr[i + 1]);
            a = arr[i];
            b = arr[i + 1];
        }
    }
    printf("%d %d\n", a, b);
    }
    

    
    return 0;
}