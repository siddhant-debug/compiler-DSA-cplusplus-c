#include <iostream>
using namespace std;

int main()
{
    int a[20], k, i, n, c0 = 0, c1 = 0, c2 = 0;
    cout << "enter the number of elements which has only 0,1,2" << endl;
    cin >> n;
    cout << "array is";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else
            c2++;
    }
    for (i = 0; i < c0; i++)  //updating index of 0
        a[k++] = 0;
    for (i = 0; i < c1; i++) //updating index od 1
        a[k++] = 1;
    for (i = 0; i < c2; i++) //updating index of 2
        a[k++] = 2;

    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}