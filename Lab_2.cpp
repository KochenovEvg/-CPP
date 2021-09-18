#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int k, x, y;
  float f, g;
  cout<<"Enter x:"; cin>>x;
  cout<<"Enter y:"; cin>>y;
  cout<<"enter function: "<<endl;;
  cout<<"1 - sh(x)"<<endl;
  cout<<"2 - x^2"<<endl;;
  cout<<"3 - e^x"<<endl;;
  cin>>k;
  switch (k)
  {
    case 1: f = sinh(x);
    case 2: f = pow(x,2);
    case 3: f = exp(x);
  }
  if (0.5<(x*y)){
  if ((x*y)<10.0) g = exp(f-abs(y));
  } else
    if (0.1<(x*y))
    {
    if ((x*y)<0.5) g = pow((abs(f+y)),1/3);
    } else
    g = 2*pow(f,2);
  cout<<"g = "<<g<<endl;
  system("pause");
  return 0;
}
