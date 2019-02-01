#include <iostream>
using namespace std;

int step;
unsigned long result;

// Functions that compute steps 1 through 7
void one() {
  result = 1 * 1;
  cout << "      1 * 1       =        " << result << endl;
}
void two() {
  result = 11 * 11;
  cout << "     11 * 11      =       " << result << endl;
}
void three() {
  result = 111 * 111;
  cout << "    111 * 111     =      " << result << endl;
}
void four() {
  result = 1111 * 1111;
  cout << "   1111 * 1111    =     " << result << endl;
}
void five() {
  result = 11111 * 11111;
  cout << "  11111 * 11111   =    " << result << endl;
}
void six() {
  result = 111111L * 111111L;
  cout << " 111111 * 111111  =   " << result << endl;
}
void seven() {
  result = 1111111L * 1111111L;
  cout << "1111111 * 1111111 =  " << result << endl;
}

int main() {

  cout << "Enter step number: ";
  cin >> step;
  
  switch (step) {
    case 1:
      one();
      break;
    case 2:
      one();
      two();
      break;
    case 3:
      one();
      two();
      three();
      break;
    case 4:
      one();
      two();
      three();
      four();
      break;
    case 5:
      one();
      two();
      three();
      four();
      five();
      break;
    case 6:
      one();
      two();
      three();
      four();
      five();
      six();
      break;
    case 7:
      one();
      two();
      three();
      four();
      five();
      six();
      seven();
      break;
    default:
      cout << "Invalid Input" << endl;
      break;
  }

  return 0;
}
