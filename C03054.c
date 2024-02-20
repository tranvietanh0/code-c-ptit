#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkValid(int n){
    bool ok = false;
    while(n){
        int k = n % 10;
        if(k == 1 || k ){
            ok = true;
        }
    }
    if(ok == false){
        return false;
    }
    return true;
}
int main(){

    return 0;
}