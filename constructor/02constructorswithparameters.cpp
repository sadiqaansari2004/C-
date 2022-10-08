#include<iostream>// headerfile
using namespace std;

class employee{
    public:
    string name;
    int salary;

    employee(string n, int s, int sp){// constructor
        this->name=n;
        this->salary=s;
        this->secretpassword=sp;
    }
    
    void printdetails(){
        cout<<"The name of our first employee is "<<this->name<<" and her salary is "<<this->salary<<" dollars"<<endl;
    }
    
    void getsecretpassword(){
        cout<<"The secret password of "<<this->name<<" is "<<this->secretpassword<<endl;
    }

    private:
        int secretpassword;
};
int main(){
    employee sad("Sadiqa Ansari", 100, 966036);// class object(this will call constructor)
    // sad.name="Sadiqa Ansari";
    // sad.salary=100;
    sad.printdetails();
    // cout<< sad.secretpassword;
    sad.getsecretpassword();
    return 0;
}
