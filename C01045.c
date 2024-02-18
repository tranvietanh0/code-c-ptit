#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int last = n % 10;
    int first;
    while (n >= 10) {
        n /= 10;
    }
    first = n;
    printf("%d %d", first, last);
    return 0;
}
