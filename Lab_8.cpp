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
    float r, p, k, s;
    r =(x*x)/8.0;
    s = r;
    for(k = 3; abs(r) > e ; k++)
    {
      p = -(x*(2 * k - 3)/(2*k));
      r = r*p;
      s = s + r;
    }
    return s;
}
int main()
{
  float e = 0.001, h = 0.1, a = -0.9, b = 0.9, i;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "h = " << h << endl;
  cout << "E = " << e << endl;
  cout << "F(x): " << "\t\t\t\t" << "ROW:" <<endl;
  for(i = a; i < b + h; i = i + h)
  {
    cout << "F(" << i << ") = " << func(i)<< "\t\t" <<"Row("<< i <<") = "<<row(i,e) << endl;
  }
  cout << endl;
  return 0;
  system("pause");
}
