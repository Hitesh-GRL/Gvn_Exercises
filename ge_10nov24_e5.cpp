#include <iostream>
using namespace std;

class Counter {
private:
    static int totalCount; // Static member variable
    int objectCount;       // Non-static member variable

public:
    Counter() {
        totalCount++;      // Increment totalCount for each object created
        objectCount = 1;   // Initialize objectCount for this object
    }

    // Static member function to display total count
    static void displayTotalCount() {
        cout << "Total count of objects: " << totalCount << endl;
    }

    // Non-static member function to display object-specific count
    void displayObjectCount() {
        cout << "Object-specific count: " << objectCount << endl;
    }
};

// Initialize the static member variable outside the class
int Counter::totalCount = 0;

int main() {
    Counter obj1;   // Create first object
    obj1.displayObjectCount();
    Counter::displayTotalCount(); // Call static function

    Counter obj2;   // Create second object
    obj2.displayObjectCount();
    Counter::displayTotalCount(); // Call static function

    return 0;
}
