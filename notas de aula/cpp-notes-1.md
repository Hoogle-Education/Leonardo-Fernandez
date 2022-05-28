# Overview C++

```cpp
#include <iostream>

using namespace std;

int main(){

  // se código aqui

  return 0; 
}
```

## `# include` + `std`

`iostrean` singifica *input and output stream*, ou seja, um possível fluxo contínuo de entradas e saídas. `std` é para usarmos o modo *standard* de cada função que for formos chamando.

## `main` - Entrypoint padrão

é o ponto que nosso programa escolhe para iniciar a leitura de comandos.

# Entrada e saída de dados

## Saída - Comando `cout`

**cout:** *Command out*
**endl:** *End Line*

```cpp
  cout << "Hello World!" << endl;
```

## Variáveis

São caixinhas que guardam informações úteis **ao longo do código**

Tipos principais de variáveis:


|Tipo|Sintaxe|Descrição|
|:--:|:--:|:--:|
|inteiro|`int a`| Cria um número `a` do tipo inteiro|
|real|`float f`|Cria um número real com até 4 casas de precisão |
|real|`double d`|Cria um número real com até 8 casas de precisão|
|booleano|`bool b`|Cria uma variável capaz de guardar `true` ou `false`|
|cáracter|`char c`| Guarda um caracter dentro de uma variável|
|frase|`string s`|Guarda um vetor de caracteres|


## Entrada

Usamos o `cin` para fazer entradas, e através do *Command in* podemos armazenar dados digitados no terminal, para uma variável.

```cpp
int n; // criando um inteiro
cin >> n; // lendo um inteiro
```

```cpp
double x;
cin >> x;
```

## Operadores Lógicos

**Expressão:** `a = 2`
Leitura: "a recebe 2"

**Expressão:** `a == 2`
Leitura: "a e igual a 2?"

|Operador|Uso|Significado|
|:-:|:-:|:-:|
|`+=`|`a += b`| Signifca `a = a + b`|
|`-=`|`a -= b`| Significa `a = a - b`|
|`*=`|`a *= b`| Significa `a = a * b`|
|`%`|`a % b`|Retorna o resto de a dividido por b|
|`%=`|`a %= b`|Significa `a = a%b`|
|`++`|`a++`| Signfica somar um em `a`|
|`--`|`a--`| Signfica diminuir um em `a`|
|`!`|`!a`|Signfica negação|


