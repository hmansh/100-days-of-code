#include <iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout << "Base Class" << endl;
    };
};

class B : public A{
    public:
    void display(){
        cout << "Derived Class" << endl;
    }
};

int main(){
    A *a;
    A c;
    a = &c;
    a->display();

    A *b;
    B d;
    b = &d;
    (*b).display();
}