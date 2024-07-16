#include <bits/types/timer_t.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "timer.c"

int main() {

    struct Timer * timer;

    start(timer);
    printf("Started: %ld\n", getCurrentTime());

    for (int i = 0; i <= 9000000; i++) {
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
    }

    end(timer);

    printf("Ended: %ld\n", getCurrentTime());
    printf("Wait Time: %ld\n", getWaitTime(timer));

    EXIT_SUCCESS;
}