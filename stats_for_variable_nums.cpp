#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

#define VALUES 25

int rand_0toN1(int n);

int hits[VALUES];

int main() {
  int n, i, r;

  srand(time(NULL));

  cout << "Enter number of trials to run ";
  cout << "and press Enter: ";
  cin >> n;

  for(i = 1; i <= n; i++) {
    r = rand_0toN1(VALUES);
    hits[r]++;
  }

  for(i = 0; i < VALUES; i++) {
    cout << i << ": " << hits[i] << " Accuracy: ";
    cout << static_cast<double>(hits[i]) / (n / VALUES) << endl;
  }
  return 0;
}

int rand_0toN1(int n) {
  return rand() % n;
}
