#ifndef OBJECT_H
#define OBJECT_H

#include <unordered_map>

class Component;
class Transform;
class MeshFilter;
class MeshRenderer;

class Object
{
protected:
	std::unordered_map<std::string, Component*> compMap;
public:
	void AddComponent();
	Component* GetComponent();
public:
	void Start();
	void Update();
	void Render();
};

#endif // !OBJECT_H
