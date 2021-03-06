#ifndef _VECTOR3_H
#define _VECTOR3_H

class Vector3
{
public:
    Vector3() = default;
    Vector3(float a, float b, float c) : elem{a,b,c} {}
    Vector3(const Vector3& to_copy) = default;

    float    operator[](int) const;
    Vector3  cross(const Vector3&) const;

    float    dot(const Vector3&) const;

    float    magsq() const;
    float    mag() const;

    Vector3  add(const Vector3&) const;
    Vector3  sub(const Vector3&) const;

    Vector3  mul(float) const;

    Vector3  unit(void) const;

    float      * data()       { return elem; }
    float const* data() const { return elem; }
private:
    float  elem[3]{};
};

// typedef float Vector3[3];

// float* cross_product(Vector3 vec1, Vector3 vec2, Vector3 out);
// float dot_product(Vector3 vec1, Vector3 vec2);
// float magsq(Vector3 vec);
// float* vecsub(Vector3 vec1, Vector3 vec2, Vector3 out)
// float* scalar_mul(Vector3 vec, float scalar, Vector3 out)

#endif /* _VECTOR3_H */
