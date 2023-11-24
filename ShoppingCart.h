#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "Shirts.h"
#include "Pants.h"
#include "Shoes.h"
#include <string>
#include <iostream>
using namespace std;

class ShoppingCart {
    public:
        // constructor
        ShoppingCart();

        // Pre: user has selected 1 on the main menu
        // Post: user is prompted to select item(s) which are then added to cart
        void AddItems();

        // Pre: user has selected 2 on the menu
        // Post: all items in cart are printed to screen
        void DisplayCart();

        // Pre: user has selected 3 on the menu
        // Post: print total price of combined items, along with the discounts
        void DisplayTotal();

        // Pre: discounts are available
        // Post: discount prices are calculated & printed for user to see
        void GetDiscount();


    private:
        float itemsInCart;              // stores total items in cart
        Shirts shirtsInCart;            // stores total shirts in cart
        Pants pantsInCart;              // stores total pants in cart
        Shoes shoesInCart;              // stores total shoes in cart
        float shirtDiscount;            // stores amount discounted off shirts
        float pantsDiscount;            // stores amount discounted off pants
        float shoesDiscount;            // stores amount discounted off shoes
        float itemsDiscount;            // stores amount discounted off all items
        float finalPrice;               // stores final price/total

};

#endif // SHOPPINGCART_H
