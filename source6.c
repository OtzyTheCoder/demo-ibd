#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("Source6 will fail to compile!");
    int sleep_time = rand() % 21 + 10;
    sleep(sleep_time);
    printf("Slept for %d seconds in source6!", sleep_time);
    // Intentional error: missing semicolon
    printf("This is an error"
    return 0;
}
