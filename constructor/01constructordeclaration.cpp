#include<iostream>
using namespace std;

class print{
    public:
        print(){    // constructor
            cout<<"Hello world!!"<<endl;
        }
};

int main(){
    print object;   // object is object of class print(this will call constructor)
    return 0;
}
