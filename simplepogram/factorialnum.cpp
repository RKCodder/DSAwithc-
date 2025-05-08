#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int i,num;
    cout<<"enter the any number";
    cin>>num;
    if(num<0)
    {
        cout<<"fatorial of negative number does not esixt";
}
else{
 for(i=1;i<=num; i++)
 {
    fact=fact*i;
 }
 cout<<"factorial of num "<<num<<"  "<<fact<<endl;
}
return 0;
    }
