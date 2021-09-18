#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int k, n, i;
    cout << "Enter length of array" << endl;
    cin >> k;
    cout << "How much to shift?" << endl;
    cin >> n;
//начало создания динамического массива
    int *arr = new int[k];
    int *marr = new int[k];
//конец создания динамического массива
    for (i = 0; i < k; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << "  " << arr[i] << "  ";
    }
    cout << endl;
//Сдвиг
    for (i = 0; i < k; i++)
    {
        if (i + n < k)
            marr[i] = arr[i + n];
        else
            marr[i] = arr[abs(i + n - k)];
        cout << "  " << marr[i] << "  ";
    }
    cout << endl;
//Сдвиг
    delete [] arr;
    delete [] marr;
    system("pause");
    return 0;
}
