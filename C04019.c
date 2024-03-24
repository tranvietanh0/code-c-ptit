#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        int mp[30001] = {0};
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            mp[a[i]]++;
        }
        int max_ = -1e9;
        int res = -1;
        for (int i = 0; i < n; i++){
            if(mp[a[i]] > max_){
                max_ = mp[a[i]];
            }
        }
        for (int i = 0; i < n; i++){
            if(mp[a[i]] == max_){
                printf("%d ", a[i]);
                mp[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}