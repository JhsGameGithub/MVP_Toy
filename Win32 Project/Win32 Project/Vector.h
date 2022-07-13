#ifndef VECTOR_H
#define VECTOR_H

#include <vector>

struct Vector3
{
	float x, y, z;

	Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
	Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
};

struct Vector2
{
	float x, y;
};

struct Face
{
	std::vector<unsigned int> position_index;
	std::vector<unsigned int> texture_index;
	std::vector<unsigned int> normal_index;
	unsigned int vertex_num;
};

#endif // !VECTOR_H
