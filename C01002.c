// Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị gấp đôi của N.

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

// 2

// 46
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d", &a);
        printf("%d\n", 2 * a);
    }
    return 0;
}