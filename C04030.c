#include <stdio.h>
#include<stdlib.h>
int cmp1(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int cmp2(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *y - *x;
}
int main(){
    int cnt = 1;
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(int), cmp1); 
        qsort(b, n, sizeof(int), cmp2);
        int j = 0, k = 0;
        printf("Test %d:\n", cnt);
        for (int i = 1; i <= 2 * n; i++){
            if(i % 2 == 1){
                printf("%d ", a[j]);
                j++;
            }
            else{
                printf("%d ", b[k]);
                k++;
            }
        }
        cnt++;
        printf("\n");
    }
    return 0;
}