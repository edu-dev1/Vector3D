# Vector3D
A 3D Vector class for operations with vectors C++.

## Features:
- Easy to use.

## Example of use:
```
#include "Vector3D/Vector3D.h"

int main(void){

    Vector3D P(-1, 2, 5), Q(4, 0, -3);

    std::cout << "P = " << P << std::endl;
    std::cout << "Q = " << Q << std::endl;
    std::cout << "~P = " << P.opposite() << std::endl;
    std::cout << "~Q = " << Q.opposite() << std::endl;
    std::cout << "|P| = " << P.getMagnitude() << std::endl;
    std::cout << "|Q| = " << Q.getMagnitude() << std::endl;
    std::cout << "3P - 2Q = " << (3 * P) - (2 * Q)<< std::endl;
    std::cout << "1/|P| = " << P.unitVector() << std::endl;
    std::cout << "PQ = " << (P * Q) << std::endl; //Scalar product
    std::cout << "P × Q = " << (P ^ Q) << std::endl; //Vectorial product

    return 0;
}
```
