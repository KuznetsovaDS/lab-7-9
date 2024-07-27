#include <iostream>
#include <cstdio>
#include "Time.h"
using namespace std;
Time::Time() : hours(0), minutes(0), seconds(0) {}
Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalTime();
}
void Time::normalTime() {
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes = minutes % 60;
    }
    if (hours >= 24) {
        hours = hours % 24;
    }
}
    void Time::display() const {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    Time Time::plus(const Time& t2) const {
        Time result;
        result.hours = hours + t2.hours;
        result.minutes = minutes + t2.minutes;
        result.seconds = seconds + t2.seconds;
        result.normalTime();
        return result;
    }
