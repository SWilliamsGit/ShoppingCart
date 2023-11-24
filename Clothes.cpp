#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

// constructor
Clothes::Clothes(){
}

// Pre: user is prompted to choose amount
// Post: quantity is stored in itemCount
void Clothes::ChooseAmount() {
    cout << "Enter Quantity: ";
    cin >> itemCount;
}

// Pre: data has been stored in itemCount
// Post: return itemCount
int Clothes::GetCount() {
    return itemCount;
}

// Pre: originalPrice and itemCount have been declared
// Post: total price is calculated and returned
float Clothes::GetTotalPrice() {
    float totalPrice;
    // calculate total price
    totalPrice = originalPrice * itemCount;
    return totalPrice;
}

// Pre: originalPrice and itemCount have been declared
// Post: discount price has been calculated and returned
float Clothes::GetDiscountPrice() {
    // calculate discount price
    discountPrice = originalPrice * itemCount;
    // if more than two items
    if (itemCount >= 2) {
        // discount 15%
        discountPrice = discountPrice * 0.85;
    }
    return discountPrice;
}

// Pre: data has been stored in attribute
// Post: return attribute
string Clothes::GetAttribute() {
    return attribute;
}
