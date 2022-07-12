#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Component.h"
#include "Vector.h"

class Transform : public Component
{
public:
	Vector3 position, rotation, scale;
public:
	Transform() : Component("Transform"), position(0.0f, 0.0f, 0.0f), rotation(0.0f, 0.0f, 0.0f), scale(1.0f, 1.0f, 1.0f) {}
};

#endif // !TRANSFORM_H
