#include <iostream>
#include "Clothes.h"
#include "Shirts.h"
#include "Shoes.h"
#include "Pants.h"
#include "ShoppingCart.h"
using namespace std;

// constructor
ShoppingCart::ShoppingCart(){
}

// Pre: user has selected 1 on the main menu
// Post: user is prompted to select item(s) which are then added to cart
void ShoppingCart::AddItems() {
    int option;
    bool menu = true;                               // set menu to true

    while (menu) {
        // prompt user with menu choices
        cout << "Select an Item: " << endl;
        cout << "1. Shirts " << endl;               // enter 1 to add shirts
        cout << "2. Pants " << endl;                // enter 2 to add pants
        cout << "3. Shoes " << endl;                // enter 3 to add shoes
        cout << "4. Return to Main Menu" << endl;   // enter 4 to return to main menu
        cin >> option;

        // if option not valid
        if (option < 1 || option > 4) {
            cout << "Invalid input." << endl << endl;
        }

        switch(option) {
        case 1: shirtsInCart.ChooseAmount();        // call ChooseAmount function
                shirtsInCart.ChooseAttribute();     // call ChooseAttribute function
                break;

        case 2: pantsInCart.ChooseAmount();         // call ChooseAmount function
                pantsInCart.ChooseAttribute();      // call ChooseAttribute function
                break;

        case 3: shoesInCart.ChooseAmount();         // call ChooseAmount function
                shoesInCart.ChooseAttribute();      // call ChooseAttribute function
                break;

        case 4: menu = false; cout << "Returning to Main..." << endl;
        }
    }
}

// Pre: user has selected 2 on the menu
// Post: all items in cart are printed to screen
void ShoppingCart::DisplayCart() {
    cout << endl << "Cart: " << endl;

    // print shirts
    cout << shirtsInCart.GetCount() << ' ' << shirtsInCart.GetAttribute() << ' '
         << "Shirts " << "$" << shirtsInCart.GetTotalPrice() << endl;

    // print pants
    cout << pantsInCart.GetCount() << ' ' << pantsInCart.GetAttribute() << ' '
        << "Pants " << "$" << pantsInCart.GetTotalPrice() << endl;

    // prints shoes
    cout << shoesInCart.GetCount() << ' ' << shoesInCart.GetAttribute() << ' '
         << "Shoes " << "$" << shoesInCart.GetTotalPrice() << endl;

}

// Pre: user has selected 3 on the menu
// Post: print total price of combined items, along with the discounts
void ShoppingCart::DisplayTotal() {
    // set variables equal to one another & call GetCount function
    int shirtCount = shirtsInCart.GetCount();
    int pantsCount = pantsInCart.GetCount();
    int shoesCount = shoesInCart.GetCount();

    // create new variable for shoes bc it has a different discount type
    float shoesTotal = shoesInCart.GetDiscountShoes() - shoesInCart.BuyOneGetOne();

    // add total prices together
    finalPrice = shirtsInCart.GetDiscountPrice() + pantsInCart.GetDiscountPrice() + shoesTotal;

    // add up total items in the cart
    itemsInCart = shirtCount + pantsCount + shoesCount;

     // call GetDiscount function
    GetDiscount();

    // if more than 5 items
    if (itemsInCart >= 5) {
        // discount 5% off total
        finalPrice = finalPrice * 0.95;
    }

    cout << endl;

    // print final price/total including all available discounts
    cout << "Total: $" << finalPrice << endl;

}

// Pre: discounts are available
// Post: discount prices are calculated & printed for user to see
void ShoppingCart::GetDiscount() {
    // set variables equal to one another and calculate discount price
    shirtDiscount = shirtsInCart.GetTotalPrice() - shirtsInCart.GetDiscountPrice();
    pantsDiscount = pantsInCart.GetTotalPrice() - pantsInCart.GetDiscountPrice();
    shoesDiscount = shoesInCart.BuyOneGetOne();

    cout << endl << "Discounts: " << endl;
    // if 2 or more shirts
    if(shirtsInCart.GetCount() >= 2)
        // discount 15%
        cout << "Shirts: 2 items 15% off! -$" << shirtDiscount << endl;
    // if 2 or more pants
    if(pantsInCart.GetCount() >= 2)
        // discount 15%
        cout << "Pants: 2 items 15% off! -$" << pantsDiscount<< endl;
    // if 2 or more pants
    if(shoesInCart.GetCount() >= 2)
        // receive 1 shoe free for every 2
        cout << "Shoes: Buy 1 Get 1 Free! -$" << shoesDiscount;
    // if 5 ore more total items
    if(itemsInCart >= 5)
        //itemsDiscount = finalPrice * 0.05;
        cout << endl << "Items Discount: $" << finalPrice * 0.05 << " off!" << endl;
}
