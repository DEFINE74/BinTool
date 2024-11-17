#include "../include/handler.hpp"

using std::cout, std::string;

int CommandHandler(string command) {
  if (command == "help") Help();
  else if (command == "quit") return 3;
  else if (command == "clear") Clear();
  else if (command == "mkbin") mkbin();
  else {
    cout << "FATAL: INCORRECT COMMAND!";
  }
  return 0;
}