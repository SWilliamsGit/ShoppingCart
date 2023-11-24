/******************************************************************************
Skyler Williams CSC210
10/30/22
Shopping Cart Application!
This program creates an application that allows the user to "purchase" clothing
items: shirts, pants, and shoes. The program also allows the user to choose various
attributes of the items, and offer discounts on the items.
*******************************************************************************/

#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

int main(){

    int option;                                         // variable for menu options
    bool menu = true;                                   // set menu to true
    ShoppingCart shopping;                              // create object

    // loop while true
    while (menu) {
        // prompt user with menu choices
        cout << endl << "CSC SHOPPING: " << endl;
        cout << "1. Add Items\n";                       // enter 1 to add items to cart
        cout << "2. Display Cart\n";                    // enter 2 to display items in cart
        cout << "3. Display Total\n";                   // enter 3 to display total & discounts
        cout << "4. Checkout\n";                        // enter 4 to exit/close program
        cin >> option;


        // if option not valid
        if (option < 1 || option > 4) {
            cout << "Invalid input." << endl;
        }

        switch(option) {
            case 1: shopping.AddItems(); break;         // call AddItems function
            case 2: shopping.DisplayCart(); break;      // call DisplayCart function
            case 3: shopping.DisplayTotal(); break;     // call DisplayTotal function
            case 4: menu = false; cout << "Thanks for shopping!";
        }
    }
    return 0;
}
