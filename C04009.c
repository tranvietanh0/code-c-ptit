#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int odd[1000] = {0};
    int even[1000] = {0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even[a[i]]++;
        }
        else{
            odd[a[i]]++;
        }
    }
    for (int i = 0; i < n; i++){
        if(even[a[i]] != 0){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        if(odd[a[i]] != 0){
            printf("%d ", a[i]);
        }
    }
    return 0;
}