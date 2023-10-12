#include "grains.h"

uint64_t square(uint8_t index) {
    if (index <= 0 || index > 64) return 0;
//    return pow((double)2, (double)(index-1));
//    return pow(2, index);
//    return (uint64_t)pow(2, index-1);
    return (uint64_t)1 << (index-1);
}

uint64_t total(void) {
    uint64_t sum = 0;
    for (int i = 1; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}

//int main() {
//    printf("square(1) = %d\n", square(1));
//    printf("square(2) = %d\n", square(2));
//    printf("square(3) = %d\n", square(3));
//    printf("square(4) = %d\n", square(4));
//    printf("square(16) = %d\n", square(16));
//    return 0;
//}