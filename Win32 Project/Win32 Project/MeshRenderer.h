#ifndef MESH_RENDERER_H
#define MESH_RENDERER_H
#include "Component.h"

class MeshRenderer : public Component
{
public:
	virtual void Update() override;

public:
	MeshRenderer() : Component("MeshRenderer") {}
};

#endif // !MESH_RENDERER_H
