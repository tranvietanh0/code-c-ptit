#include <stdio.h>
#include <math.h>
int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int ans = min(a, b);
    int min_ = min(ans, c);
    printf("%d", min_);
    return 0;
}