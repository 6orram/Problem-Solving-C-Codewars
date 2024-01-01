#include<stdio.h>

long long *tribonacci(const long long signature[3], size_t n) {
    long long expected[10];

    for (int i=0; i<n; i++){
        expected[i] = signature[i];
    }

    for (int i=3; i<=10; i++){
        expected[i] = expected[i-1] + expected[i-2] + expected[i-3];
    }

    return expected
}

int main(){
    long signature[3] = {1,1,1};


}