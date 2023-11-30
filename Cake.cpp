//
// Created by Kfir Nudelman on 24/11/2023.
//

#include "Cake.h"

Cake::Cake(const Date &expiryDate, int Diameter, double Height, double Price, int Storage, bool GlutenFree)
        : ExpiryDate(expiryDate) {

    this->Diameter = Diameter;
    this->Height = Height;
    this->Price = Price;
    this->Storage = Storage;
    this->GlutenFree = GlutenFree;
}

Cake::Cake(const Cake &other) {}

bool Cake::operator==(const Cake& other) const{
    bool result = Diameter == other.Diameter &&
            Height == other.Height &&
            Price == other.Price &&
            Storage == other.Storage &&
            GlutenFree == other.GlutenFree;
    return result;
}

Cake& Cake::operator+=(double amount){
    Price +=amount;
    return *this;
}

ostream &operator<<(ostream &os, const Cake &cake) {
    os << "ExpiryDate: " << cake.ExpiryDate << " Diameter: " << cake.Diameter << " Height: " << cake.Height
       << " Price: " << cake.Price << " Storage: " << cake.Storage << " GlutenFree: " << cake.GlutenFree;
    return os;
}
