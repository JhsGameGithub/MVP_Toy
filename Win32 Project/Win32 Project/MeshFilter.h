#ifndef MESH_FILTER_H
#define MESH_FILTER_H

#include "Component.h"

struct Vector3;

class MeshFilter : public Component
{
public:
	void MeshImport(std::string path);

public:
	MeshFilter() : Component("MeshFilter") {}
	void LoadNode(FbxNode* node);
	Vector3* ProcessControlPoints(FbxMesh* mesh);
	Vector3 ReadNormal(const FbxMesh* mesh, int controlPointIndex, int vertexCounter);
	Vector3 ReadBinormal(const FbxMesh* mesh, int controlPointIndex, int vertexCounter);
	Vector3 ReadTangent(const FbxMesh* mesh, int controlPointIndex, int vertexCounter);
};

#endif // !MESH_FILTER_H
