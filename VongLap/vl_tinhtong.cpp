#include <iostream>

using namespace std;

int main() {
  int n = 1;
  while (n <= 10000) {
    n *= 2;
  }
  cout << n << endl;
  return 0;
}
