#include <iostream>
using namespace std;

int main() {
  int test_arr[6] = {10, 22, 13, 99, 4, 5};
  int i, sum = 0;

  for(i = 0; i < 6; i++) {
    cout << test_arr[i] << endl;
    sum = sum + test_arr[i];
  }

  cout << "The sum is: " << sum;

  return 0;
}
