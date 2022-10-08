#include<iostream>
using namespace std;

class print{            // The class
    private:           // access specifiers
    string name;      // attribute
    public:          // access specifiers
    print(string n);// constructor declaration inside the class
};

// Constructor definition outside the class
print:: print(string n){
    name=n;
    cout<<"My name is "<<name<<endl;// print values
}
int main(){
    // Create Car objects and call the constructor with parameters
    print object("Sadiqa Ansari");
    return 0;
}
