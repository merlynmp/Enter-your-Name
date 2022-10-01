// Merlyn Pothen
#include <iostream>
using namespace std;
int main() {

  // name
  string name;

  // to exit program
  string exit;
  exit = "END";

  // user input
  cout << "You can enter a name until you type END." << endl;
  cout << "Enter a name: ";
  cin >> name;

  // if user inputs "END", terminate program
  if (name == exit) {
    cout << "I am done";
    return 0;
  }

  cout << endl;
  
  // loop to enter names. If user inputs "END", terminate program
  while (name != exit) {
    cout << "Enter another name. Type END to stop." << endl;
    cout << "Next name: ";
    cin >> name;
    if (name == exit) {
      cout << "I am done.";
    }
    cout << endl;
  }

  return 0;
}