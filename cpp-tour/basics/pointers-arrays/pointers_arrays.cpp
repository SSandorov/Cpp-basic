#include <iostream>

// Traditional for loop in c++
void copy_fct()
{
    int v1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int v2[10];

    for ( auto i = 0; i != 10; ++i) {
        v2[i] = v1[i];

        std::cout << "Vector 2 position " << i << ": " << v2[i] << "\n";
    }
}

// A range-for-statement. Used for loops that traverse a sequence 
void rangeForArray()
{
    int v[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for ( auto x : v ) {
        std::cout << x << "\n";
    }
}

int main()
{
    // copy_fct();
    rangeForArray();
}