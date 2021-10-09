#include<iostream>
#include<math.h>
using namespace std;

float sfact(float x)
{
  int y = 1, i;
  if(x == 0)
  {
    return x;
  }
  else if(x == 1) return 1;
  else
  for(i = 2; i <= x; i = i + 2) y = y * i;
  return y;
}

float func(float x)
{
    float y;
    y = pow(1.0 + x, 0.5) - 1.0 - x * 0.5;
    return y;
}

float row(float x, float e)
{
    float r, p;
    int k;
    r =(x*x)/8;
    cout << "r(" << 2 << ")=" << r << endl;
    k = 3;
    cout << "Progress" << endl;
    while(r > e)
    {
      p = -1 * (x * (2*k - 3))/(2*k);
      r = r*p; 
      cout << "r(" << k << ")=" << r << endl;
      k++;
    }
    return r;
}
int main()
{
  float e = 0.001, h = 0.1, a = -0.9, b = 0.9, i;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "h = " << h << endl;
  cout << "E = " << e << endl;
  cout << "F(x): " << endl;
  for(i = a; i < b + h; i = i + h)
  {
    cout << "F(" << i << ") = " << func(i) << endl;
  }

  cout << "ROW: " << endl;
  // for(i = a; i < b + h; i = i + h)
  // {
  //   cout << "Row(" << i << ") = "<< row(i,e) << endl;
  // }
  cout << "Row(0.9)" << row(0.9, e);
  return 0;
  system("pause");
}
