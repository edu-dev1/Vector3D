#ifndef Vector3D_h
#define Vector3D_h

#include <iostream>
#include <cmath>

class Vector3D{// A 3D Vector class for operations with vectors, obviously.
    private:
        float __x, __y, __z, __magnitude;
    public:
        Vector3D();
        Vector3D(float x, float y, float z);
        Vector3D(const Vector3D &vector);
        ~Vector3D();
        Vector3D opposite() const;// Returns the opposite of the 3D Vector. 
        float getMagnitude();// Returns the magnitude of the 3D Vector.
        Vector3D midPoint(const Vector3D &vector) const;// Returns the coordinates of the midpoint of the segment joining this vector and `vector`.
        Vector3D unitVector() const;// Returns the unit vector in it's direction.
        Vector3D operator+(const Vector3D &vector) const;// Additions of vectors.
        Vector3D operator-(const Vector3D &vector) const;// Subtraction of vectors.
        Vector3D operator^(const Vector3D &vector) const;// Returns the vectorial product.
        float operator*(const Vector3D &vector) const;// Returns the scalar product.
        friend Vector3D operator*(int scalar, const Vector3D &vector);// Scalar multiplication.
        friend std::ostream &operator<<(std::ostream &out, const Vector3D &vector);
};

#endif
