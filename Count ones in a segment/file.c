#include <stdint.h>
#include <stdio.h>


uint64_t countOnesUpTo(uint64_t n) {
    uint64_t total = 0;
    for (uint64_t i = 1; i <= n; i *= 2) {
       
        uint64_t full_cycles = (n + 1) / (2 * i);
        total += full_cycles * i;

     
        uint64_t remaining_bits = (n + 1) % (2 * i);
        if (remaining_bits > i) {
            total += remaining_bits - i;
        }
    }
    return total;
}


uint64_t countOnes(uint64_t left, uint64_t right) {
    
    return countOnesUpTo(right) - countOnesUpTo(left - 1);
}

int main() {
    uint64_t left = 4, right = 7;
    printf("%llu\n", countOnes(left, right)); 
    return 0;
}