#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the number which you want to check"<<endl;
    cin>>N;
    bool flag=0;
    for(int i=2; i<N; i++){
        if(N%i==0){
            cout<<"Not a prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}
