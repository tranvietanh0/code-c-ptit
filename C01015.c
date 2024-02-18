#include<stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double denta = b * b - 4 * a * c;
    if(denta < 0){
        printf("NO");
    }
    else if(denta == 0){
        double x = -1.0 * b / (2 * a);
        printf("%.2lf", x);
    }
    else{
        double x1 = (-b + sqrt(denta)) / (2 * a);
        double x2 = (-b - sqrt(denta)) / (2 * a);
        printf("%.2lf %.2lf", x1, x2);
    }
    return 0;
}