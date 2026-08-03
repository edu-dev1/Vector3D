#include "Vector3D.h"

Vector3D::Vector3D(){
    __x = 0.0f;
    __y = 0.0f;
    __z = 0.0f;
    __magnitude = 0.0f;
}

Vector3D::Vector3D(float x, float y, float z){
    __x = x;
    __y = y;
    __z = z;
}

Vector3D::Vector3D(const Vector3D &vector){
    __x = vector.__x;
    __y = vector.__y;
    __z = vector.__z;
}

Vector3D::~Vector3D(){}

Vector3D Vector3D::opposite() const{
    return Vector3D(__x != 0 ?__x * -1 : 0, __y != 0 ? __y * -1 : 0, __z != 0 ? __z * -1 : 0);
}

float Vector3D::getMagnitude(){
    int x2 = __x * __x, y2 = __y * __y, z2 = __z * __z;
    __magnitude = fabsf(sqrtf(x2 + y2 + z2));

    return __magnitude;
}

Vector3D Vector3D::midPoint(const Vector3D &vector) const{
    return Vector3D(((__x + vector.__x) / 2), ((__y + vector.__y) / 2), ((__y + vector.__y) / 2));
}

Vector3D Vector3D::unitVector() const{
    if(__magnitude == 0.0f){
        return Vector3D();
    }

    return Vector3D(__x / __magnitude, __y / __magnitude, __z / __magnitude);
}

Vector3D Vector3D::operator+(const Vector3D &vector) const{
    return Vector3D(__x + vector.__x, __y + vector.__y, __z + vector.__z);
}

Vector3D Vector3D::operator-(const Vector3D &vector) const{
    return Vector3D(__x - vector.__x, __y - vector.__y, __z - vector.__z);
}

Vector3D Vector3D::operator^(const Vector3D &vector) const{
    return Vector3D((__y * vector.__z) - (__z * vector.__y), -1 * ((__x * vector.__z) - (__z * vector.__x)), (__x * vector.__y) - (__y * vector.__x));
}

float Vector3D::operator*(const Vector3D &vector) const{
    return (__x * vector.__x) + (__y * vector.__y) + (__z * vector.__z);
}

Vector3D operator*(int scalar, const Vector3D &vector){
    return Vector3D(vector.__x * scalar, vector.__y * scalar, vector.__z * scalar);
}

std::ostream &operator<<(std::ostream &out, const Vector3D &vector){
    out << "(" << vector.__x << ", " << vector.__y << ", " << vector.__z << ")";
    return out;
}
