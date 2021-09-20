#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int i, j, n, m, a, count, count_0;
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
  //full
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < m; j++)
      {
        cout << "    ";
        arr[i][j] = rand() %90 +65;
        cout << arr[i][j];
      }

      cout << endl;
      cout << endl;
    }
  //full
  for(a = 0; a < 1000; a++)
  {
    count = 0;
    for(i = 0; i < n; i++)
      {
        for(j = 0; j < m; j++)
        {
          if(arr[i][j] == a)
          {
            count_0 = count;
            count = count + 1;
            if(count_0 + 1 == count )
            cout << arr[i][j] << ": " << count << endl;
          }
        }
      }
  }


  for(i = 0; i < n; i++)
    delete []arr[i];
  delete []arr;
  arr = NULL;
system("pause");
return 0;
}
