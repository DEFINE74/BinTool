#include "../include/mkbin.hpp"
#include "../include/stuff.hpp"

using std::cout, std::cin, std::endl;
using std::string, std::to_string;
using std::numeric_limits, std::streamsize;

int EnterDecimal() {
  int decimal_number;
  const int MINIMAL_NUMBER = 0;
  const int MAXIMUM_NUMBER = 255;
  while (true) {
    cout << "Enter your decimal number (0-255): ";
    cin >> decimal_number;
    if (cin.fail()) {
      cin.clear(); 
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
      Clear(); 
      ErrorArgument();
      
      continue;
      } if (decimal_number < MINIMAL_NUMBER || decimal_number > MAXIMUM_NUMBER) {
        Clear(); 
        ErrorNumber();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return decimal_number;
    }
}
string GetBinary(int decimal_number) {
  string bin_number;  
  if (decimal_number == 0) return "00000000";  

  while (decimal_number > 0) {  
    bin_number = to_string(decimal_number % 2) + bin_number; 
    decimal_number /= 2;  
  } while (bin_number.length() < 8) {
    bin_number = "0" + bin_number;
  } 
  return bin_number; 
}
void ShowBinary(string binary_number) {
  cout << endl << "Your bin - " << binary_number << endl;
}
void mkbin() {
  int decimal_number = EnterDecimal();
  string binary_number = GetBinary(decimal_number);
  ShowBinary(binary_number);
}
