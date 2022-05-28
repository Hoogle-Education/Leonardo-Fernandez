# Estruturas de seleção

Aqui iremos escolher se um determinado bloco deve ou não ser executado.

```c++
double nota = 7.2;

if(/*condição*/){
  // seu código se for verdade
} else {
  // seu código se for falso
}
``` 

```c++
if(/*condição 1*/){
  //código se a priemeira for verdade
} else if(/*condição 2*/) {
  // código se a segunda for verdade
} else if(/*condição  3*/){
  // código se a terceira for verdade
} else {
  // código se nenhuma for verdade
}
```
# Operadores para booleanos

- `&&`: Operandor `and` 

> as duas precisam ser verdade ao mesmo tempo

- `||`: Operador `or`
  
> apenas uma delas precisa ser verdade

```cpp

int estoque, hora;

bool verifica1 = estoque >= 10;

if( verifca1 and (hora>=9 and hora<=18)){
  cout << "pode abrir a loja" << endl;
} else {
  cout << "ainda nao posso" << endl;
}
```

