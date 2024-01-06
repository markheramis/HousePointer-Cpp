#include <iostream>

using namespace std;

/**
 * Define a structure to represent a House with attributes like Square Feet, Number of Bedrooms, and Number of Bathrooms.
 */
typedef struct {
    int squareFeet;     /**< The total area of the house in square feet. */
    int numBedrooms;    /**< The number of bedrooms in the house. */
    int numBathrooms;   /**< The number of bathrooms in the house. */
} House;

/**
 * Calculate the price of a House using its attributes.
 *
 * This function accepts a House object by value. The House object is copied, and the copied version is used within the function.
 * This is analogous to bringing a physical house to an appraiser for appraisal, which consumes significant resources.
 *
 * @param house - The House object for which to calculate the price.
 *
 * @return The calculated price of the house based on its attributes.
 */
int calculateHousePriceByValue(House house) {
    // Calculate the house price using a formula based on its attributes
    return house.squareFeet * 1000 + house.numBedrooms * 10000 + house.numBathrooms * 5000;
}

/**
 * Calculate the price of a House using its attributes.
 *
 * This function accepts a pointer to a House (or the address of the house).
 * By providing the address of the House, the appraiser metaphorically goes to the location of the house for appraisal.
 *
 * @param house - A pointer to the House object for which to calculate the price.
 *
 * @return The calculated price of the house based on its attributes.
 */
int calculateHousePriceByReference(House* house) {
    // Calculate the house price using a formula based on its attributes, accessed through the pointer
    return house->squareFeet * 1000 + house->numBedrooms * 10000 + house->numBathrooms * 5000;
}

int main()
{
    // Create a House
    House myDreamHouse = { 960, 2, 1 };

    cout << "USING THE OBJECT (traditional)" << endl;

    // Print the details of the House using the House object
    cout << "Square Feet: " << myDreamHouse.squareFeet << endl;
    cout << "Number of Bedrooms: " << myDreamHouse.numBedrooms << endl;
    cout << "Number of Bathrooms: " << myDreamHouse.numBathrooms << endl;

    // Calculate and print the House price using the House object
    int housePriceByValue = calculateHousePriceByValue(myDreamHouse);
    cout << "House Price: " << housePriceByValue << endl;

    // Create a pointer to the House
    House* pMyDreamHouse = &myDreamHouse;

    cout << "USING POINTERS" << endl;

    // Print the details of the House pointed to by the pointer
    cout << "Square Feet: " << pMyDreamHouse->squareFeet << endl;
    cout << "Number of Bedrooms: " << pMyDreamHouse->numBedrooms << endl;
    cout << "Number of Bathrooms: " << pMyDreamHouse->numBathrooms << endl;

    // Calculate and print the House price using the pointer to the House
    int housePriceByReference = calculateHousePriceByReference(pMyDreamHouse);
    cout << "House Price: " << housePriceByReference << endl;
}
