// gcd-> greatest common divisor
#include<iostream>
using namespace std;

int main(){
    int a, b, temp, gcd;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    while(gcd){
        if(a%b==0){
            gcd=b;
            break;
        }
        else{
            temp=a%b;
            a=b;
            b=temp;
        }
    }
    cout<<"GCD= "<<gcd<<endl;
    return 0;
}
