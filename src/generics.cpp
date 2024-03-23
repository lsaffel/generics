#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void Swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a , b);
    
}