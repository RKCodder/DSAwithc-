#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks of student";
    cin>>marks;
    if(marks>=90)
    {
cout<<"grad A"<<endl;
    }
    else if (marks>=80 && marks<90)
    {
        cout<<"grad B"<<endl;
    }
    else
    {
        cout<<"grad C";
    }
    
    return 0;
}