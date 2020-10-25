#include<iostream>
using namespace std;

struct users{
    int no;
    int *arr = new int[10];
    int arrn[10];
};

class Testing{
    int a;
    int *b;
};

struct empty{
    int l;
};

int main(int argc, char const *argv[])
{
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;

    cout << "Type Modifiers : " << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(int8_t) << endl;
    cout << sizeof(int16_t) << endl;
    cout << sizeof(int32_t) << endl;
    cout << sizeof(int64_t) << endl;

    cout << "Pointers : " << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(char *) << endl;

    cout << "User Defined : " << endl;
    cout << sizeof(users) << endl;
    cout << sizeof(Testing) << endl;
    cout << sizeof(empty) << endl;
    return 0;
}
