#include<iostream>
using namespace std;

int main()
{
    int n,array[20],i,min,max;
    cout<<"Enter the number of values u want"<<endl;
    cin>>n;
    cout<<"array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        cout<<endl;
    }

   if(n==1)
   {
       max=array[0];
       min=array[0];
   }
   else{
       if (array[0]>array[1])
       {
           max=array[0];
           min=array[1];
       }
       else{
           max=array[1];
           min=array[0];
       }
       for(i=2;i<n;i++)
       {
           if(array[i]>max){
                max=array[i];
           }
           if(array[i]<min){
               min=array[i];
           }
       }
   }
   cout<<"maximun element is "<<max<<endl;
   cout<<"minimum element is "<<min<<endl;
    

}