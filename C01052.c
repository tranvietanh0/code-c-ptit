#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a;
        scanf("%d", &a);

        int cnt = 0; // Số lượng ước số chia hết cho 2

        for (int i = 1; i <= sqrt(a); i++) {
            if (a % i == 0) {
                if (i % 2 == 0) {
                    cnt++;
                }
                if (i != a / i && (a / i) % 2 == 0) {
                    cnt++;
                }
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
