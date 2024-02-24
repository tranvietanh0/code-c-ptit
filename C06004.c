#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int alphaCount = 0, digitCount = 0, otherCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            
            alphaCount++;
        } 
        else if (isdigit(str[i])) { 
            digitCount++;
        } 
        else if(str[i] != '\n'){ 
            otherCount++;
        }
    }
    printf("%d %d %d\n", alphaCount, digitCount, otherCount);
    return 0;
}
