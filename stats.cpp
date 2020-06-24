#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);

int hits[10];

int main() {
  int n, i, r;

  srand(time(NULL));

  cout << "Enter number of trials to run ";
  cout << "and press Enter: ";
  cin >> n;

  for(i = 1; i <= n; i++) {
    r = rand_0toN1(10);
    hits[r]++;
  }

  for(i = 0; i < 10; i++) {
    cout << i << ": " << hits[i] << " Accuracy: ";
    cout << static_cast<double>(hits[i]) / (n / 10) << endl;
  }
  return 0;
}

int rand_0toN1(int n) {
  return rand() % n;
}
