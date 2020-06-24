#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);

int hits[5];

int main() {
  int n, i, r;

  srand(time(NULL));

  cout << "Enter number of trials to run ";
  cout << "and press Enter: ";
  cin >> n;

  for(i = 1; i <= n; i++) {
    r = rand_0toN1(5);
    hits[r]++;
  }

  for(i = 0; i < 5; i++) {
    cout << i << ": " << hits[i] << " Accuracy: ";
    cout << static_cast<double>(hits[i]) / (n / 5) << endl;
  }
  return 0;
}

int rand_0toN1(int n) {
  return rand() % n;
}
