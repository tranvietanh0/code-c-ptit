#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int year = n / 365;
    int week = (n - year * 365) / 7;
    int day = n - year * 365 - week * 7;
    printf("%d %d %d", year, week, day);
    return 0;
}