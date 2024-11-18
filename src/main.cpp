#include "../include/stdafx.hpp"

using std::cin, std::cout, std::endl;
using std::string;

int main() {
  string command;  
  ShowTitle();
  while (true) {
    cout << endl << ">  ";
    cin >> command;

    int result = CommandHandler(command);

    if (result == 3) break;
    else if (result == -1) cout << "FATAL: INCORRECT COMMAND!" << endl;
  }
  return 0;
}
