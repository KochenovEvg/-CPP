#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int i, j, n, m;
  cout << "Enter N" << endl;
  cin >> n;
  cout << "Enter M" << endl;
  cin >> m;
  //array
  char **arr;
    arr = new char*[n];
      for (i = 0; i < n; i++)
        arr[i] = new char[m];
  //array
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < m; j++)
      {
        arr[i][j] = 65+ rand() %90;
        cout << arr[i][j] << "  ";
      }
      cout << endl;
    }
  for(i = 0; i < n; i++)
    delete []arr[i];
  delete []arr;
  arr = NULL;
system("pause");
return 0;
}
