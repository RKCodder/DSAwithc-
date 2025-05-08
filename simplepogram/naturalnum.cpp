#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int count,num;
    cout<<"enter any number ";
    cin>>num;
    for(count=1; count<=num; count++)
    {
        sum=sum+count;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}