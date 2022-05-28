#include <iostream>

using namespace std;

int main(){

  int estoque, hora;

  cin >> estoque >> hora;

  if(estoque >= 10 and (hora>=9 and hora<=18)){
    cout << "pode abrir a loja" << endl;
  } else if (estoque >= 10) {
    cout << "fora do horario" << endl;
  } else if ((hora>=9 and hora<=18)){
    cout << "estoque insuficiente" << endl;
  } else {
    cout << "nenhuma das condicoes foi atendida" << endl;
  }
  

  return 0;
}