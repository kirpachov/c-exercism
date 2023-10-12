#include "armstrong_numbers.h"
#include <string.h>
#include "stdio.h"
#include <stdlib.h>

bool is_armstrong_number(int candidate) {
    printf("--------------- BEGIN ---------------\n");
    char candidate_str[10];
    sprintf(candidate_str, "%d", candidate);
    printf("Candidate is %d (%s)\n", candidate, candidate_str);
    int base = strlen(candidate_str);
    // if (base == 1) return 1;
    printf("Base: %d\n", base);
    int sum = 0;
    for(int i = 0; i < base; i++) {
        char current = candidate_str[i];
        int current_int = atoi(&current);
        int subpartial = current_int;
        for(int j = 0; j < base-1; j++) {
            subpartial = current_int * subpartial;
        }
        sum += subpartial;
        printf("At index %d, there is %c. Int is: %d. Subpartial: %d\n", i, current, current_int, subpartial);
    }

    printf("Sum is %d\n", sum);

    printf("--------------- DONE ---------------\n");
    return sum == candidate;
}
