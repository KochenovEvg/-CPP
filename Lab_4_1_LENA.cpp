#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  srand(time(0));
  int i, t, j, p = 0;
  char str[100];
  char q;
  cout << "Enter the length of the line: ";
  cin >> t;
  for (i = 0; i < t; i++)
  {
    str[i] = rand() % 49 + 48;
    cout << str[i];
  }
  cout << endl;
    for(i = t; i > 0; i--)
    {
      if(str[i] <= 57 && str[i] >= 48)
      {
        if(str[i+1]<= 57 && str[i+1] >= 48) continue;
        q = str[i-1];
        str[i-1] = str [i];
        str[i] = q;
      }
    }
  for(i = 0; i < t; i++)
  {
    cout << str[i];
  }
  cout << endl;
  system("pause");
  return 0;
}
