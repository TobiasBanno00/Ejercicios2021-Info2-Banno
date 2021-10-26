#include <iostream>
#include "../inc/hora.h"
#include "hora.cpp"
using namespace std;

int main() {
Time t;
t.setHour(18).setMinute(30).setSecond(22);
cout << "\nStandard time: ";
t.printStandard();
cout << "\n\nNew standard time: ";
t.setTime(20, 20, 20).printStandard();
cout << endl;
return 0;
}