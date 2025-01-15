#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Generating a random number in source5...");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    int num = rand() % 100;
    printf("Slept for %d seconds in source5! Random number: %d", sleep_time, num);
    if (num > 50) {
        printf("Number is greater than 50.");
    } else {
        printf("Number is 50 or less.");
    }
    return 0;
}
