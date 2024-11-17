#include "../include/mkbin.hpp"
#include "../include/stuff.hpp"

using std::cout, std::cin, std::endl;
using std::string, std::to_string;

int EnterDecimal() {
  Clear();
  int decimal_number;

  cout << endl << "Enter your decimal number: ";
  cin >> decimal_number;

  return decimal_number;
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
  int decimal_number;
  try {
    decimal_number = EnterDecimal();
    string binary_number = GetBinary(decimal_number);
    ShowBinary(binary_number);
  } catch (std::invalid_argument&) {
    Clear(); cout << "FATAL: INVALID ARGUMENT!" << endl;
  } catch (std::out_of_range&) {
    Clear(); cout << "FATAL: INVALID ARGUMENT BECAUSE OF LARGE NUMBER!" << endl;
  }
}