#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter any charcter : ";
    cin>>ch;
    if(ch>='A' && ch<='Z')
        cout<<"Uppercase"<<endl;

    else if(ch>='a' && ch<='z')
        cout<<"Lower case"<<endl;

    else if(ch>='0' && ch<='9')
        cout<<"Number"<<endl; 

    else
        cout<<"Special Charcter"<<endl;

    return 0;
}