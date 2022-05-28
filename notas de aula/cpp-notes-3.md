# Estruturas de Repetição

Aqui nosso objetivo é executar *enquanto* ou *até quando* alguma condição durar.

## A base para loops e repetições

```
1. inicialização
2. verificação
3. atualização
```

## Loop while 

```cpp

int estoque = 10;

while( estoque != 0 ){
  
  int a = 2;

  cout << "Estou vendendo\n";

  estoque--; // diminui 1 do estoque
  a++;
}

```