#include<iostream>
using namespace std;

int main(){
    int n, sum=0; 
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=2; i<=n; i=i+2){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
