#include <iostream>
#include <limits>

using namespace std;


int EnterDecimal() {
    int decimal_number;

    cout << "Enter your decimal number: ";
    while (true) {
        cin >> decimal_number;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid integer." << endl;
            cout << "Enter your decimal number: ";
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return decimal_number;
    }
}

int main() {
    int number = EnterDecimal();
    cout << "You entered: " << number << endl;
    return 0;
}
