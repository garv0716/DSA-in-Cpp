#include<iostream>
using namespace std;

class Print{
    public:
    void show(int x){
        cout<< "Integer : " << x << endl;
    }

    void show(string x){
        cout<< "String : " << x << endl;
    }
};

int main (){
    Print p;
    p.show(8);
    p.show("Hello Polymorphism");
    return 0;
}