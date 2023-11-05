#include<iostream>
using namespace std;
enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    cout<< "Number of remaining days is "( 7 - today );
    return (7 -today);
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    return 0;
}
