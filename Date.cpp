using namespace std;

#include "Date.h"
#include <iostream>

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
    this->month = month;
    this->day = day;
    this->year = year;


}

bool Date::operator==(const Date &other) const {

    return day == other.day && month == other.month && year == other.year;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}


void Date::setDay(int newDay) {

    if (newDay >= 1 && newDay <= 31) {
        this->day = newDay;
    } else {
        this->day=0;
        throw "The Day value is invalid (should be 1-31)";

    }


}

void Date::setMonth(int newMonth) {
    if (newMonth >= 1 && newMonth <= 12) {
        this->month = newMonth;
    } else {
        this->month = 0;
        throw "The Month is in valid (should be 1-12)";
    }
}

void Date::setYear(int newYear) {
    if (newYear >= 1900 && newYear <= 2024) {
        this->year = newYear;
    } else {
        newYear = 0;
    }
}


void Date::print() const {
    cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}
