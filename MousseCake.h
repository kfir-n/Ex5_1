//
// Created by Kfir Nudelman on 24/11/2023.
//

#ifndef EX5_MOUSSECAKE_H
#define EX5_MOUSSECAKE_H
#include "Cake.h"
using namespace std;

class MousseCake : protected Cake{
private:
    string& Taste;
public:
    //constructor
    MousseCake(Date ExpiryDate, int Diameter, double Height, double Price, int Storage, bool GlutenFree,string &Taste);

    //copy constructor
    MousseCake(const MousseCake &other);

    //destructor
    ~MousseCake();

    //get
    Date getExpiryDate();
    int getDiameter();
    double getHeight();
    double getPrice();
    int getStorage();
    bool getGlutenFree();
    string *getMousseTaste() const;
    //set
    void setExpiryDate(Date ExpiryDate);
    void setDiameter(int Diameter);
    void setHeight(double Height);
    void setPrice(double Price);
    void setStorage(int Storage);
    void setGlutenFree(bool GlutenFree);
    string *setMousseTaste() const;

    //operators
    //missing the first operator
    Cake& operator+=(double amount);
    friend ostream& operator<<(ostream& os, const Cake& cake);
};


#endif //EX5_MOUSSECAKE_H
