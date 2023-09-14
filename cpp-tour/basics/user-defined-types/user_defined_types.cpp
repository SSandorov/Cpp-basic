#include <iostream>

//* Data structure
struct Vector
{
    int sz; // number of elements
    double* elem; // pointer to elements
};

//* Vector construction
// The & in Vector& indicates that we pass v by non-constant reference, so 
// the vector_init function can modify the vector passed to it
void vector_init( Vector& v, int s )
{
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;

    // the new operator allocates memory from the free store, also known
    // as dynamic memory and heap
}

//* Use of Vector
double read_and_sum( int s )
// read s integers from cin and return their sum
// s is assumed to be positive
{
    Vector v;
    vector_init( v, s ); // allocate s elements for v

    for ( int i = 0; i != s; ++i ) {
        std::cin >> v.elem[i]; // read into elements
        // std::cout << i << "\n";
    }

    double sum = 0;
    for ( int i = 0; i != s; ++i ) {
        sum += v.elem[i]; // take the sum of the elements
        // std::cout << sum << "\n";
    }

    std::cout << sum << "\n";
    return sum;
}

//* Ways to access struct members
void f( Vector v, Vector& rv, Vector* pv )
{
    int i1 = v.sz; // access through name
    int i2 = rv.sz; // access through reference
    int i3 = pv -> sz; // access through pointer
}


int main()
{
    read_and_sum(3);
}