#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the length of the 3 sides"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a=b=c)
        cout<<"The triangle is equilateral";
    else if(a==b || a==c || b==c)
        cout<<"The triangle is isosceles";
    else
        cout<<"The triangle is scalene";
    return 0;
}
