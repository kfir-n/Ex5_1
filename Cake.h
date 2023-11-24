//
// Created by Kfir Nudelman on 24/11/2023.
//

#ifndef EX5_CAKE_H
#define EX5_CAKE_H
#import "Date.h"

class Cake {

protected:
    Date expiryDate;
    int diameter;
    double height;
    double price;
    int storage; // 1 for refrigrator 2 for freezer
    bool glutenFree;

public:
    Cake(Date expiryDate, int diameter, double height, double price, int storage, bool glutenFree);
};


#endif //EX5_CAKE_H
