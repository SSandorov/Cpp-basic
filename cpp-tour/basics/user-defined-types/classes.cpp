#include <iostream>
// using namespace std;

//* Class definition
class Vector
{
    public:
        // A function with the same name as the class is called a constructor
        // A constructor is guaranteed to be used to initialize objects of its class
        Vector( int s ):
        // the constructor initializes the Vector members using a member initializer list
            elem { 
                new double[s]
            },
            sz {
                s 
            } {} // construct a Vector
        double& operator[]( int i ) {
            return elem[i];
        } // element access: subscripting
        int size() {
            return sz;
        }
    private:
        double* elem; // pointer to the elements
        int sz; // the number of elements
};

double read_and_sum( int s )
{
    Vector v(s);    // make a vector of s elements
    for ( int i = 0; i != v.size(); ++i ) {
        std:: cin >> v[i];  // read into the elements
    }

    double sum = 0;
    for ( int i = 0; i != v.size(); ++i ) {
        sum += v[i];  // take the sum of the elements
    }

    std::cout << sum << "\n";
    return sum;

}

int main()
{
    read_and_sum(3);
}