#ifndef DATE_H
#define DATE_H
#import <ostream>
class Date {
public:
    Date(int day = 1, int month = 1, int year = 2000);
        int getDay() const;
    int getMonth() const;
    int getYear() const;

    friend std::ostream &operator<<(std::ostream &os, const Date &date);

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
