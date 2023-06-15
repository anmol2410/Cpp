#include<iostream>
using namespace std;
int main() {
    int n,i=2,f=0;
    cout<<"Enter value of n : ";
    cin>>n;
    while(i<n/2){
        if(n%i==0){
            f=1;
            break;
        }
        i++;
    }

    if(f==0){
        cout<<"Prime number\n";
    }
    else{
        cout<<"Not prime number\n";
    }


    return 0;
}