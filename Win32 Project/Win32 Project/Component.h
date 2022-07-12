#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Object;

class Component
{
protected:
	Object* owner;
	std::string name;
public:
	virtual ~Component() {}
	Component(std::string name) : name(name), owner(nullptr) {}
public:
	virtual void Start() {}
	virtual void Update() {}
public:
	void SetOwner(Object* owner) { this->owner = owner; }
	Object* GetObject() const { return owner; }
	std::string GetName() const { return name; }
};

#endif // !COMPONENT_H
