#include<iostream>
using namespace std;
int main()
{
    int marks[]={1,2,3,4};
    int i;

    for(i=0;i<4;i++)
    {
        cout<<"These are the marks "<<i<<endl<<"values are"<<marks[i]<<endl;
    }
    while(i<4)
    {
        cout<<"Values present at "<<i<<"are"<<endl<<marks[i]<<endl;
        i++;
    }
    do{
        cout<<marks[i]<<endl;
        i++;
    }while(i<4);

}