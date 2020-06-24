#include <iostream>
using namespace std;

int main() {
  int scores[7];
  int sum = 0;
  int i;

  for(i = 1; i < 8; i++) {
    cout << "Enter the value for space " << i << ": ";
    cin >> scores[i];
  }

  for(i = 0; i < 7; i++) {
    sum = sum + scores[i];
  }

  cout << "The sum is: " << sum;

  return 0;
}
