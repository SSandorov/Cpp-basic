//* For consistency, this file, which provides the implementation of Vector will also include the .h
//* file including the Vector interface

#include "Vector.h"

//* We are DEFINING the vector
Vector::Vector(int s)
    :elem{
        new double[s]
    },
    sz{
        s
    } {}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size() {
    return sz;
}
