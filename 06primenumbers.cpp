// program to print all prime numbers till N
#include<iostream>
using namespace std;

int main(){
    int N, factors, i, div;
    cout<<"Enter N till where to end:"<<endl;
    cin>>N;
    for(i=2; i<=N; i++){
        factors=0;
        for(div=2; div<=(i/2); div++){
            // check for prime
            if(i%div==0){
                factors=factors+1;
                break;
            }
        }
        if(factors==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
