#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số giảm
bool isDecreasing(int n) {
    int lastDigit = n % 10;
    n /= 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit <= lastDigit) {
            return false;
        }
        lastDigit = digit;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t); // Nhập số lượng bộ test

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b); // Nhập a và b cho mỗi bộ test

        int count = 0; // Biến đếm số lượng số giảm

        // Duyệt qua từng số từ a đến b
        for (int num = a; num <= b; num++) {
            if (isDecreasing(num)) { // Kiểm tra xem số đó có phải là số giảm hay không
                count++; // Nếu là số giảm, tăng biến đếm lên
            }
        }

        printf("%d\n", count); // In ra số lượng số giảm đếm được cho mỗi bộ test
    }

    return 0;
}
