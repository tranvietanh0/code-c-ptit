#include<stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == b && b == 0){
        printf("Vo so nghiem");
    }
    else if(a == 0){
        printf("Vo nghiem");
    }
    else{
        printf("%.2lf", -1.0 * b / a);
    }
    return 0;
}