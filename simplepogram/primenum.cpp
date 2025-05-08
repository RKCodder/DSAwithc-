#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter number";
    cin>>num;
    for(i=2; i<=num-1; i++)
    {
        if(num%i==0)
        {
            cout<<"this non prime numbers";
        }
        else{
            cout<<"this is prime number ";
        }
    }
    return 0;

}