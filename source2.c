#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Starting source2...");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    printf("Slept for %d seconds in source2!", sleep_time);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += rand() % 10;
        printf("Sum after iteration %d: %d", i + 1, sum);
    }
    return 0;
}
