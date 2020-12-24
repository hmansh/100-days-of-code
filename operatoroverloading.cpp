#include <iostream>
using namespace std;

class Class{
    int amount;
public:
    Class(){
        amount = 0;
    }
    void display(){
        cout << "Amount : " << amount << endl;
    }
    void operator ++ (){
        amount+=200000;
    }
};


int main(int argc, char const *argv[])
{
    Class person;
    person.display();
    ++ person;
    person.display();
    return 0;
}
