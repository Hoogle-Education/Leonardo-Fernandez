#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  if (a < b and a < c)
  {
    cout << a << endl;
    if (b < c)
    {
      cout << b << endl
           << c << endl
           << endl;
    }
    else
    {
      cout << c << endl
           << b << endl
           << endl;
    }
  }
  else if (b < a and b < c)
  {
    cout << b << endl;
    if (a < c)
    {
      cout << a << endl
           << c << endl
           << endl;
    }
    else
    {
      cout << c << endl
           << a << endl
           << endl;
    }
  }
  else
  {
    cout << c << endl;
    if (b < a)
    {
      cout << b << endl
           << a << endl
           << endl;
    }
    else
    {
      cout << a << endl
           << b << endl
           << endl;
    }
  }

 cout << a << endl << b << endl << c << endl;

    return 0;
}
