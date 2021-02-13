#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int k,max,min,n,i,a[10];
    cout<<"enter how many elements do u want "<<endl;
    cin>>n;
    cout<<"array is "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter kth element";
    cin>>k;
    sort( a ,a + n);
    cout<<a[k-1]<<endl;

}
