#include <string>
#include <iostream>
#include "Cake.h"
#include "Date.h"

using namespace std;

int main() {
    Date expDate(19,1,1994);
    Cake cake(expDate,10,14.5,44.3,11,true);
    cout << cake;

    return 0;
}