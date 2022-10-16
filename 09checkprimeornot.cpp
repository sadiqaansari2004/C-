// program to check whether a given number is prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(int i=2; i<=(n/2); i++){
        // check prime
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"prime number"<<endl;
    return 0;
}
