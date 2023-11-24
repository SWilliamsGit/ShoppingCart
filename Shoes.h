#ifndef SHOES_H
#define SHOES_H
#include <string>
#include <iostream>
using namespace std;

class Shoes : public Clothes {

    public:
        // constructor
        Shoes();

        // Pre: user has selected shirts
        // Post: attribute has been applied to shirts
        void ChooseAttribute();

        // Note: because Shoes has a different type of discount than shirts & pants,
        //       it cannot use the base class GetDiscount function
        // Pre: originalPrice and itemCount have been declared
        // Post: buy one get one discount is applied and returns discount price for shoes
        float BuyOneGetOne();

        // Pre: originalPrice and itemCount have been declared
        // Post: returns discountPrice
        float GetDiscountShoes();

    private:
        float shoesDiscount;        // stores shoes discount price
};

#endif // SHOES_H
