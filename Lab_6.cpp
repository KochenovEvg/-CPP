#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int i, j, t, p;
  char q[50];
  char str[50];
  srand(time(0));
  //t — length of str
  t = 1 + rand() % 50;
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
  if (str[0] <= 57 && str[0] >= 48)
  cout << str[0];
  else cout << "";
  for(i = 1; i <= t; i++)
  {
    if(str[i] <= 57 && str[i] >= 48)
    cout << str[i];
    else cout<<"";
    
    if(str[i+1] <= 57 && str[i+1] >= 48)
    cout << "; ";
    else cout << "";
  }
  cout << endl;

  system("pause");
  return 0;
}


// if(str[0] <= 57 && str[0] >= 48)
// cout << str[0];
// for(i = 1; i <=t; i++)
// {
//     if(str[i] <= 57 && str[i] >= 48 )
//     cout << str[i];
//     else if(str[i+1] <= 57 && str[i+1] >= 48)
//     cout << ", ";
// }
// cout << endl;
