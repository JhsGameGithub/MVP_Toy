#ifndef MESH_FILTER_H
#define MESH_FILTER_H

#include "Component.h"

class MeshFilter : public Component
{
public:
	virtual void Start() override;

public:
	MeshFilter() : Component("MeshFilter") {}
};

#endif // !MESH_FILTER_H
