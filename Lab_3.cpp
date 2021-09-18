#include<iostream>
#include<math.h>
using namespace std;
float func(float x)
{
    float f = (exp(x)-(exp(-x)))/2;
    return f;
}
 int fact(int t)
 {
   int s = 1;
   for(int i = 1; i <= t; i++)
     s = s*i;
   return s;
 }
int main()
{
    float a, b, h, x, s, m;
    int i, n, j;
    cout.precision(3);
    a = 0.1;
    b = 1;
    h = (b - a)/10;
    cout<<"Values of F(x) from 0.1 to 1.0: "<<endl;
    for (x = 0.1; x <= b + h; x = x + h)
    {
        cout <<"F("<<x<<")="<<func(x)<<";"<<endl;
    }
    n = 8;
    cout << "Row:"<<endl;
    cout << "fact(5)" << fact(5) << endl;
    m = 0;
    for(x = 0.1; x <= b; x = x + h)
    {
      for(i = 0; i <= n; i++)
      {
        m = m + (pow(x, (2 * n + 1))/fact(2 * n + 1));
      }
      cout << m <<"; ";
    }
    system("pause");
    return 0;
}
