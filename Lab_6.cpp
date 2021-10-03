#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int i, j, t, p, q;
  char str[100];
  srand(time(0));
  //t — length of str
  t = 1 + rand() % 100;
  cout << "length of line = " << t + 1 << endl;
  //p — переменная рандома
  for(i = 0; i <= t; i++)
  {
    p = 1 + rand() % 3;
    switch(p)
    {
      case 1:
      str[i] = rand() % 4 + 43;
      cout << str[i];
      break;
      case 2:
      str[i] = rand() % 10 + 48;
      cout << str[i];
      break;
      case 3:
      str[i] = rand() % 26 + 65;
      cout << str[i];
      break;
    }
  }
  cout << endl;
  for(i = 0; i <= t; i++)
  {
    if(str[i] >= 48 && str[i] <= 57) continue;
    else
    {
      str[i] = 0;
    }

    if(str[i] == 0)
    cout << "";
    else
    {
      if (str[i+1] == 0)
      cout << str[i] << "; ";
      else cout << str[i];
    }
  }
  cout << "Whole numbers : ";
  for(i = 0; i <= t; i++)
  {
    if(str[i] == 0)
    cout << "";
    else
    {
      if (str[i+1] == 0)
      cout << str[i] << "; ";
      else cout << str[i];
    }
  }
  cout << endl;

  system("pause");
  return 0;
}
