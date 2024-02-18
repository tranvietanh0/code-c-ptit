// Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị bình phương của N.

// Input

// Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số tự nhiên không quá 9 chữ số.

// Output

// Với mỗi bộ test, ghi ra kết quả trên một dòng.

// Ví dụ

// Input

// Output

// 2

// 1

// 23
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long a;
        scanf("%lld", &a);
        printf("%lld\n", a * a);
    }
    return 0;
}