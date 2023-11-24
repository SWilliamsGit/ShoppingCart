#ifndef CLOTHES_H
#define CLOTHES_H
#include <string>
#include <iostream>
using namespace std;

class Clothes {

    public:
        // constructor
        Clothes();

        // Pre: user is prompted to choose amount
        // Post: quantity is stored in itemCount
        void ChooseAmount();

        // Pre: data has been stored in itemCount
        // Post: return itemCount
        int GetCount();

        // Pre: originalPrice and itemCount have been declared
        // Post: total price is calculated and returned
        float GetTotalPrice();

        // Pre: originalPrice and itemCount have been declared
        // Post: discount price has been calculated and returned
        float GetDiscountPrice();

        // Pre: data has been stored in attribute
        // Post: return attribute
        string GetAttribute();

    // protected instead of private members so variables can be accessed by derived classes
    protected:
        int itemCount;                  // stores number of items
        float originalPrice;            // stores original price of item
        float discountPrice;            // stores discount price
        string attribute;               // stores attribute (color, fabric, brand) of item
};



#endif // CLOTHES_H
