#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Hello from source1!");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    printf("Slept for %d seconds in source1!", sleep_time);
    return 0;
}
