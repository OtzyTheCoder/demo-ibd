#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Source4: Random sleep...");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    printf("Slept for %d seconds in source4!", sleep_time);
    int factorial = 1;
    for (int i = 1; i <= 5; i++) {
        factorial *= i;
        printf("Factorial of %d: %d", i, factorial);
    }
    return 0;
}
