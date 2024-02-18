#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int last = n % 10;
        int first;
        while (n >= 10) {
            n /= 10;
        }
        first = n;
        if (first == last) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
