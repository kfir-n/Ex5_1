#include <string>
#include <iostream>
using namespace std;
/* python example
a = 5   //int
b = 6   // int
c = 6.5 //float
*/
struct people {
    char *name[50];
    int age;
};

struct Car {
    string model;
    string color;
    float price;
    int plateNumber;
    int seatNum;
    int year;

};

int main() {
//    people kfir;
//    kfir.age = 19;
//    kfir.name[5] = "kfir";
    Car Volvo;
    Car Opel;
    Car Mazda;

    Volvo.year=2002;
    Volvo.price=100000;
    Volvo.color="Red";
    Volvo.model="VX5";
    Volvo.seatNum=5;
    Volvo.plateNumber=11111;

    Opel.year=2018;
    Opel.price=200000;
    Opel.color="blue";
    Opel.seatNum=5;
    Opel.model="Corsa";
    Opel.plateNumber=123123;

    cout << Volvo.year << endl;
    cout << Volvo.price << endl;
    cout << Volvo.color << endl;
    cout << Volvo.model << endl;
    cout << Volvo.seatNum << endl;
    cout << Volvo.plateNumber << endl;


    return 0;
}

// Struct
