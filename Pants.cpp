#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

// constructor
Pants::Pants(){
    originalPrice = 40.00;                      // set original price
    itemCount = 0;                              // set item counter
    attribute = "";                             // set attribute string
}

// Pre: user has selected shirts
// Post: attribute has been applied to shirts
void Pants::ChooseAttribute() {
    int option;

    // prompt user
    cout << "Select a Fabric: " << endl;
    cout << "1. Silk" << endl;                  // enter 1 for silk pants
    cout << "2. Cotton" << endl;                // enter 2 for cotton pants
    cout << "3. Linen" << endl;                 // enter 3 for linen pants
    cin >> option;

    // if option not valid
    if (option < 1 || option > 3) {
        cout << "Invalid input." << endl;
    }

    cout << endl;

    switch(option) {
        case 1: attribute = "Silk"; break;      // set attribute equal to Silk
        case 2: attribute = "Cotton"; break;    // set attribute equal to Cotton
        case 3: attribute = "Linen"; break;     // set attribute equal to Linen
    }
}
