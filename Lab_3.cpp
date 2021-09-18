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
    float a, b, h, x, m;
    int i, n, j;
    cout.precision(5);
    a = 0.1;
    b = 1;
    h = (b - a)/10;
    cout<<"Values of F(x) from 0.1 to 1.0: with h=(b-a)/10="<< h <<endl;
    for (x = 0.1; x <= b + h; x = x + h)
    {
        cout <<"F("<<x<<")="<<func(x)<<";"<<endl;
    }
    n = 10;
    cout << "Row:"<<endl;
    for(x = 0.1; x <= b + h; x = x + h)
    {
      m = 0;
      for(i = 0; i <= n; i++)
      {
        m = m + (pow(x, (2 * i + 1))/fact(2 * i + 1));
      }
      cout << "F("<< x << ")=" << m << "; " << endl;
    }

    system("pause");
    return 0;
}
