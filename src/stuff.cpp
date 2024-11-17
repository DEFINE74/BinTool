#include "../include/stuff.hpp"

using std::cout, std::endl;

void Clear() {
  system("cls"); 
  ShowTitle();
}
void ShowTitle() {
  cout << "Ultimate binary number toolkit" << endl;
}
void Help() {
  system("cls");
  cout << "Welcome to 'Help'!" << endl;
  cout << "1) quit - close this programme" << endl;
  cout << "2) clear - clear the screen" << endl;
  cout << "3) mkbin - make binary number from decimal" << endl;
  cout << "4) mkdec - make decimal number from binary" << endl;
  cout << "5) mltpl - multiply 2 binary numbers" << endl;
}
