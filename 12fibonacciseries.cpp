#include<iostream>
using namespace std;
int main()
{
    int N, firstnum, secondnum, resultnum, i;
    cout<<"Enter the value of N:"<<endl;
    cin>>N;
    firstnum=1;
    secondnum=1;
    cout<<firstnum<<" ";
    cout<<secondnum<<" ";
    for(i=3; i<=N; i++){
        resultnum=firstnum+secondnum;
        cout<<resultnum<<" ";
        firstnum=secondnum;
        secondnum=resultnum;
    }
    cout<<endl;
    return 0;
}
