#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

// constructor
Shirts::Shirts() {
    originalPrice = 25.00;                  // set original price
    itemCount = 0;                          // set item counter
    attribute = "";                         // set attribute string
}

// Pre: user has selected shirts
// Post: attribute has been applied to shirts
void Shirts::ChooseAttribute() {
    int option;

    // prompt user
    cout << "Select a Color: " << endl;
    cout << "1. Red" << endl;               // enter 1 for red shirt
    cout << "2. Blue" << endl;              // enter 2 for blue shirt
    cout << "3. Green" << endl;             // enter 3 for green shirt
    cin >> option;

    // if option not valid
    if (option < 1 || option > 3) {
        cout << "Invalid input." << endl;
    }

    cout << endl;

    switch(option) {
        case 1: attribute = "Red"; break;   // set attribute equal to Red
        case 2: attribute = "Blue"; break;  // set attribute equal to Blue
        case 3: attribute = "Green"; break; // set attribute equal to Green
    }
}
