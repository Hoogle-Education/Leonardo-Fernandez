#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int n){
  if(n == 1) return 1;

  return n * fatorial(n-1);
}

// n! = n * (n-1)!

// 4! = 24
// 4! -> 4 * 6
// 3! -> 3 * 2
// 2! -> 2 * 1

int main() {

  for(int i=0; i<n; i++) {
    soma += (pow(-1, i) * pow(x, 2*i) ) / fatorial(2*i);
  }

  return 0;
}