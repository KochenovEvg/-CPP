#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;
int main()
{
  srand(time(0));
  int i, j, k, n, n1, n2, n3;
  n = rand() % 8 + 3;
  cout << "Amount of workers is "<< n << endl;
  struct worker
  {
      string fio;
      int num;
      int hrs;
      int tar;
  };
  worker nwork[n] = {};
  for (i = 0; i < n; i++)
  {
    k = rand() % 4;
    switch (k)
    {
      case 0:
      nwork[i].fio = "Smirnov ";
      break;
      case 1:
      nwork[i].fio = "Ivanov ";
      break;
      case 2:
      nwork[i].fio = "Pugovkin ";
      break;
      case 3:
      nwork[i].fio = "Kisly ";
      break;
      case 4:
      nwork[i].fio = "Fedorow ";
      break;
    }
    k = rand() % 4;
    switch (k)
    {
      case 0:
      nwork[i].fio.append("Vladimir ");
      break;
      case 1:
      nwork[i].fio.append("Victor ");
      break;
      case 2:
      nwork[i].fio.append("Ivan ");
      break;
      case 3:
      nwork[i].fio.append("Aleksandr ");
      break;
      case 4:
      nwork[i].fio.append("Dmirtiy ");
      break;
    }
    k = rand() % 4;
    switch (k)
    {
      case 0:
      nwork[i].fio.append("Vladimirovich");
      break;
      case 1:
      nwork[i].fio.append("Dmitrievich");
      break;
      case 2:
      nwork[i].fio.append("Aleksandrovich");
      break;
      case 3:
      nwork[i].fio.append("Victorovich");
      break;
      case 4:
      nwork[i].fio.append("Michailovich");
      break;
    }
    nwork[i].num = rand () % 90000 + 10000;
    nwork[i].hrs = rand () % 31 + 120;
    nwork[i].tar = rand () % 3 + 1;
    cout << "FIO: " << nwork[i].fio << endl;
    cout << "Number: " <<nwork[i].num << endl;
    cout << "Hours: " <<nwork[i].hrs << endl;
    cout << "Rate: " <<nwork[i].tar << endl;
    if(nwork[i].hrs < 144) cout << "Salary: " << 0.88 * (nwork[i].hrs * nwork[i].tar);
    else cout << "Salary: " << 0.88 * (nwork[i].hrs * 2 * nwork[i].tar);
    cout << endl;
    cout << endl;
  }
  system("pause");
  return 0;
}
