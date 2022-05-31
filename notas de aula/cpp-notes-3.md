# Estruturas de Repetição

Aqui nosso objetivo é executar *enquanto* ou *até quando* alguma condição durar.

## A base para loops e repetições

```
1. inicialização
2. verificação
3. atualização
```

## Loop `while` 

```cpp

int estoque = 10;

while( estoque != 0 ){

  cout << "Estou vendendo\n";

  estoque--; // diminui 1 do estoque
}
```

## Loop `for`

```java
for(/*inicialização*/; /*verificação*/; /*atualização*/){

}
```

```java
for(int i = 0; i < n; i++){
  cout << "Contando ... " << i << endl;
}
```

# Keywords

## 1. `continue`

Pula a iteração do loop no valor atual.

```java
for(int pressao = 0; pressao < 10; pressao++ ){

  if(pressao < 5) continue;

  cout << "PRESSAO = " << pressao << " | Realizando experimento" << endl;
}
```

```
PRESSAO = 5 | Realizando experimento
PRESSAO = 6 | Realizando experimento
PRESSAO = 7 | Realizando experimento
PRESSAO = 8 | Realizando experimento
PRESSAO = 9 | Realizando experimento
```

## 2. `break`

```java
for(int pressao = 0; pressao < 10; pressao++ ){

  if(pressao == 6) continue;

  if(pressao == 8) break;

  cout << "PRESSAO = " << pressao << " | Realizando experimento" << endl;
}
```

```
PRESSAO = 0 | Realizando experimento
PRESSAO = 1 | Realizando experimento
PRESSAO = 2 | Realizando experimento
PRESSAO = 3 | Realizando experimento
PRESSAO = 4 | Realizando experimento
PRESSAO = 5 | Realizando experimento
PRESSAO = 7 | Realizando experimento
```
