#include <stdbool.h>
#include <stdio.h>

bool uniqueOccurrences(int* arr, int arrSize) {
    int valueToCounter[2001] = {0};
    int counterToSeen[1001] = {0};

    for (int i = 0; i < arrSize; i++) {
        valueToCounter[arr[i] + 1000]++;
    }
    
    for (int j = 0; j < 2001; j++) {
        if (valueToCounter[j] != 0) {
            counterToSeen[valueToCounter[j]]++;
            if (counterToSeen[valueToCounter[j]] > 1) {
                return false;
            }
        }
    }
    return true;
}