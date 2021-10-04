#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  srand(time(0));
  int i, t, k = 0;
  char str[100];
  char q = 0;
  cout << "Enter the length of the line: ";
  cin >> t;
  for (i = 0; i < t; i++)
  {
    str[i] = rand() % 49 + 48;
    cout << str[i];
  }
  cout << endl;
  for(i = 0; i < t; i++)
  {
    if(str[i] <= 57 && str[i] >= 48)
    {
      q = str[i];
      str[i] = str[k];
      str[k] = q;
      k++;
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
