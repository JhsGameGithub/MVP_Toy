#include <assert.h>
#include <string>

#include "Object.h"
#include "Component.h"


void Object::AddComponent(Component& comp)
{
	compMap.insert({ comp.GetName(),comp });
}

Component Object::GetComponent(std::string name)
{
	assert(compMap.find(name) == compMap.end());
	return compMap[name];
}

void Object::Start()
{
	for (auto component : compMap)
		component.second.Start();
}

void Object::Update()
{
	for (auto component : compMap)
		component.second.Update();
}

void Object::Render()
{

}