#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int i, j, t, p, v, q;
  char str[50];
  srand(time(0));
  //t — length of str
  t = 1 + rand() % 50;
  cout << "length of line = " << t << endl;
  //p — переменная рандома
  for(i = 0; i <= t; i++)
  {
    p = 1 + rand() % 3;
    switch(p)
    {
      case 1:
      str[i] = rand() % 4 + 43;
      cout << str[i];
      case 2:
      str[i] = rand() % 10 + 48;
      cout << str[i];
      case 3:
      str[i] = rand() % 26 + 65;
      cout << str[i];
    }
  }
  cout << endl;
  system("pause");
  return 0;
}

//case 1:
//str[i] = rand() % 4 + 43;
//case 2:
//str[i] = rand() % 10 + 48;
//case 3:
//str[i] = rand() % 26 + 65;
