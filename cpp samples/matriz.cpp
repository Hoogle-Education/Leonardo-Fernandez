#include <iostream>

using namespace std;

int main()
{

  int matriz[3][3] = {{2, 3, 2},
                      {3, 4, 5},
                      {4, 5, 6}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "[" << i 
           << "][" << j 
           << "]=" << matriz[i][j] << " ";
    }

    cout << endl;
  }

  return 0;
}