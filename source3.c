#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Loop example in source3");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    printf("Slept for %d seconds in source3!", sleep_time);
    for (int i = 0; i < 5; i++) {
        printf("Loop iteration %d: Random number = %d", i, rand() % 100);
    }
    return 0;
}
