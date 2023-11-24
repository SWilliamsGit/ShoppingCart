#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

// constructor
Shoes::Shoes(){
    originalPrice = 50.00;                  // set original price
    itemCount = 0;                          // set item counter
    attribute = "";                         // set attribute string
}

void Shoes::ChooseAttribute() {
    int option;

    // prompt user
    cout << "Select a Brand: " << endl;
    cout << "1. Nike" << endl;              // enter 1 for Nike shoes
    cout << "2. Adidas" << endl;            // enter 2 for Adidas shoes
    cout << "3. Converse" << endl;          // enter 3 for Converse shoes
    cin >> option;

    // if option not valid
    if (option < 1 || option > 3) {
        cout << "Invalid input." << endl;
    }

    cout << endl;

    switch(option) {
        case 1: attribute = "Nike"; break;      // set attribute equal to Nike
        case 2: attribute = "Adidas"; break;    // set attribute equal to Adidas
        case 3: attribute = "Converse"; break;  // set attribute equal to Converse
    }
}

// Note: because Shoes has a different type of discount than shirts & pants,
//       it cannot use the base class GetDiscount function
// Pre: originalPrice and itemCount have been declared
// Post: buy one get one discount is applied and returns discount price for shoes
float Shoes::BuyOneGetOne() {
    // calculate discount price
    discountPrice = originalPrice * itemCount;
    // if even
    if (itemCount % 2 == 0) {
        shoesDiscount = discountPrice / 2;
    }
    // if odd
    else {
        shoesDiscount = discountPrice - originalPrice;
        shoesDiscount = shoesDiscount / 2;
    }
    return shoesDiscount;
}

// Pre: originalPrice and itemCount have been declared
// Post: returns discountPrice
float Shoes::GetDiscountShoes() {
    discountPrice = originalPrice * itemCount;
    return discountPrice;
}
