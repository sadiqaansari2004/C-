// program to print all prime numbers in a given range
#include<iostream>
using namespace std;

int main(){
    int low, high, i, factors, div; // div->divisor
    cout<<"Enter the starting point of a range:"<<endl;
    cin>>low;
    cout<<"Enter the ending point of a range:"<<endl;
    cin>>high;
    cout<<"The prime numbers in a given range are:"<<endl;
    // loop until does not reach high
    for(i=low; i<=high; i++){
        factors=0;
        for(div=2; div<=(i/2); div++){
            // check prime
            if(i%div==0){
                factors+=1;
                break;
            }
        }
        if(factors==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
