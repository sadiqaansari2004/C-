#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==0)
            sum=sum+i;
    }
    cout<<"Sum of even number upto n= "<<sum<<endl;
    return 0;
}
