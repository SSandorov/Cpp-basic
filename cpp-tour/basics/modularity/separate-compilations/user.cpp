//* The Vector.h file, also called 'header file' is included into this file as follows:
#include "Vector.h" // get Vector's interface
#include <cmath> // get the standard library math function interface including sqrt()

using namespace std; // make std members visible

//* We are USING the vector
double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i = 0; i != v.size(); ++i) {
        sum += sqrt(v[i]);
    }
    return sum;
}