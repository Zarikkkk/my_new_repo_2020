#include <stdio.h>

int main() {
    int massive[] = { 111, 222, 33, 44, 55, 66 };
    int min;
    int min2;
    if (massive[0] < massive[1]) {
        min = massive[0];
        min2 = massive[1];
    }
    else {
        min = massive[1];
        min2 = massive[0];
    }
    for (int i = 2; i < sizeof(massive) / 4; i++) {
        if (massive[i] < min) {
            min2 = min;
            min = massive[i];
        }
        else if (massive[i] < min2)
            min2 = massive[i];
    }
    int sum = min + min2;
    printf("Min number is: %d\n", min);
    printf("Min number #2 is: %d\n", min2);
    printf("The result is: %d", sum);
    return 0;
}
