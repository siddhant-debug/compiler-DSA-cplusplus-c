#include<iostream>
using namespace std;
int main()
{
    int i,n,array[20];
    cout<<"eneter how many values do u want";
    cin>>n;
    cout<<"enetr values";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        cout<<array[i]<<endl;
    }
    

    for(i=n-1;i>=0;i--)
    {
        cout<<array[i]<<endl;
    }
}