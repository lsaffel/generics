#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b) {
    T temp = a;        // T here as the type, instead of int or char
    a = b;
    b = temp;
}

// an alternate way to write this template, putting Type 
// (or whatever you prefer) instead of T,
// although T is common in the literature:
// template<typename >
// void Swap(Type& a, Type& b) {
//     Type temp = a;        // T here as the type, instead of int or char
//     a = b;
//     b = temp;
// }

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a , b);        // this also works with Swap(a, b). 
                        // Putting <int> is not required here
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;

    Swap<char>(c, d);       // <char> is not necessary here either.
            // the type happens atuomatically if you just put:
            // Swap(c, d);
    cout << c << " - " << d << endl;

}