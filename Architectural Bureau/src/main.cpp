#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include "Developer/Developer.hpp"
#include "Developer/WoodDeveloper.hpp"
#include "Developer/BrickDeveloper.hpp"
#include "Developer/ConcreteDeveloper.hpp"

using namespace std;

// Function to create the appropriate developer based on user choice
Developer* createDeveloper(int choice) {
    switch(choice) {
        case 1:
            return new WoodDeveloper();
        case 2:
            return new BrickDeveloper();
        case 3:
            return new ConcreteDeveloper();
        default:
            return new WoodDeveloper(); // Default
    }
}

// Function to display the types of the constructed products
void displayProducts(House* house, Fence* fence, Barn* barn) {
    cout << "Constructed:" << endl;
    cout << "- " << house->get_type() << endl;
    cout << "- " << fence->get_type() << endl;
    cout << "- " << barn->get_type() << endl;
}

int main() {
    int choice;
    cout << "Welcome to the Architectural Bureau!" << endl;
    
    // Display developer choices and validate input
    while (true) {
        cout << "Choose developer type:" << endl;
        cout << "1. Wood Developer" << endl;
        cout << "2. Brick Developer" << endl;
        cout << "3. Concrete Developer" << endl;
        cout << "Enter your choice (1-3): ";
        
        if (cin >> choice) {
            if (choice >= 1 && choice <= 3) {
                break; // Valid input
            } else {
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            while (cin.get() != '\n'); // Clear input buffer
        }
    }
    
    // Create the selected developer
    Developer* dev = createDeveloper(choice);
    
    // Build products
    House* house = dev->BuildHouse();
    Fence* fence = dev->BuildFence();
    Barn* barn = dev->BuildBarn();
    
    // Display product types
    displayProducts(house, fence, barn);
    
    // Clean up memory
    delete house;
    delete fence;
    delete barn;
    delete dev;
    
    return 0;
}