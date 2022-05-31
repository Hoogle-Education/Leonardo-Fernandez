# Função

```cpp
string retorna_mensagem() {
  return "a saida da media sera: \n"; 
}

void mostra_mensagem() {
  cout << "mensagem repetitiva\n";
}

double media(double a, double b){
  return (a+b)/2.0;
}

int main(){
  mostra_mensagem();
  cout << media(2, 3) << endl;
}
```

```
a saida da media sera: 
2.5
```

# Função Recursiva

## Essencial de funções recusivas
```
  1. expressão recursiva
  2. casos base
```

## Aplicado à Fibonacci
```
  fib(0) = 0
  fib(1) = 1
  fib(n) = fib(n-1) + fib(n-2)
```

// 0 1 1 2 3 4 5

### Chamadas recusivas de Fibonacci

```
  fib(5) = 5
  = fib(4) + fib(3) 
  = fib(3) + fib(2) + fib(2) + fib(1)
  = fib(2) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(1)
  = fib(1) + fib(0) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(1)
```

### Fatorial 

```
1! = 1 (caso base)
n! = n * (n-1)! (expressao recursiva)
n! = 1*2*3*..*n (expressao iterativa)
```

# Matrizes

```cpp
  int matriz = [ [2, 3, 2],
                 [3, 4, 5],
                 [4, 5, 6] ]


  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout << matriz[i][j] << " ";
    }

    cout << endl;
  }
```
