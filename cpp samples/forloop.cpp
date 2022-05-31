#include <iostream>

using namespace std;

int main(){

  int n, soma = 0;
  long fatorial = 1; 
  long fib = 0, ultimo = 0, penultimo = 0;
  // inteiro que aguenta mais
  // 2^31 - 1

  cout << "Digite um valor: ";
  cin >> n;

  for(int i = 0; i <= n; i++){
    cout << "Contando ... " << i << endl;

    if(i != 0) fatorial *= i;

    soma += i; // soma = soma + i

    if(i <= 1){
      fib += i;
      penultimo = ultimo;
      ultimo = i;
    } else {
      fib = ultimo + penultimo;
      penultimo = ultimo;
      ultimo = fib;
    }
  }
  
  cout << "SOMA = " << soma << endl;
  cout << "PRODUTO = " << fatorial << endl;
  cout << "FIBONACCI = " << fib << endl;

  return 0;
}

// 1 1 2 3 5 8