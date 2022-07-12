#ifndef VECTOR_H
#define VECTOR_H

struct Vector3
{
	float x, y, z;

	Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
};

struct Vector2
{
	float x, y;
};

#endif // !VECTOR_H
