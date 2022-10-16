#include<iostream>
using namespace std;

int main(){
    int a, b, min, gcd;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    if(a<b)
        min=a;
    else
        min=b;
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD= "<<gcd<<endl;
    return 0;
}
