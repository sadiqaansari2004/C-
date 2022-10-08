// Program to find largest of N numbers
#include<iostream>
using namespace std;

int main()
{
    int N, num, i, max;
    cout<<"Enter how many nums u want to give:"<<endl;
    cin>>N;
    i=1;
    max=-1;
    while(i<=N){
        cout<<"Enter any number:"<<endl;
        cin>>num;
        if(num>max){
            max=num;
        }
        i++;
    }
    cout<< "Largest number is "<<max<<endl;
    return 0;
}
