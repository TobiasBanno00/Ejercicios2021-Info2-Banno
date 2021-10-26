#ifndef HORA_H
#define HORA_H
#include <iostream>

class Time {
    public:
    Time(int = 0, int = 0, int = 0);
    Time &setTime(int, int, int);
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);
    void printStandard();
    void printThis();
    private:
    int hour;
    int minute;
    int second;
};
#endif

