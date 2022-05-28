#include <iostream>

using namespace std;

int main()
{

  double nota;

  cin >> nota;

  if (nota >= 7)
  {
    cout << "Aprovado" << endl;
  }
  else if (nota >= 6)
  {
    cout << "Vou deixar passar dessa vez" << endl;
  }
  else if (nota >= 4)
  {
    cout << "Recuperacao" << endl;
  }
  else
  {
    cout << "Reprovado" << endl;
  }

  return 0;
}
