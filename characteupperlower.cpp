#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any char";
    cin>>ch;
    if('a'<= ch && ch <='z')
    {
cout<<"lower case";
    } 
    else if('A'<= ch && ch<='Z')
    {
        cout<<"upper case ";
    }
    else{
        cout<<"other latter";
    }
    return 0;
}