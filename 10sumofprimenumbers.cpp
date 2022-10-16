// program to print sum of all prime numbers till N
#include<iostream>
using namespace std;

int main(){
    int N, factors, i, div, sum=0;    
    cout<<"Enter the N value where to stop:"<<endl;
    cin>>N;
    for(i=2; i<=N; i++){
        factors=0;
        for(div=2; div<=(i/2); div++){
            // check prime
            if(i%div==0){
                factors+=1;
                break;
            }
        }
        if(factors==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of prime numbers= "<<sum<<endl;
    return 0;
}
