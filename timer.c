#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>

struct Timer {
    long startedTime;
    long endedTime;
    long waitTime;
};

long getCurrentTime() {
    struct timeval computer_time;
    gettimeofday(&computer_time, NULL);

    int64_t start = (int64_t)(computer_time.tv_sec) * 1000;
    int64_t end = (computer_time.tv_usec/1000);

    long currentTimeMillis = (start + end);
    return currentTimeMillis;
}

void start(struct Timer * timer) {
    timer->startedTime = getCurrentTime();
}

void end(struct Timer * timer) {
    timer->endedTime = getCurrentTime();
}

long getWaitTime(struct Timer * timer) {
    return timer->endedTime - timer->startedTime;
}
