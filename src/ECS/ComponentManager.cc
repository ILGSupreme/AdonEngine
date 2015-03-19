#include "ComponentManager.h"


Adon::ComponentManager* Adon::ComponentManager::instance = nullptr;

void Adon::ComponentManager::RegisterComponent()
{

}

Adon::ComponentManager& Adon::ComponentManager::GetInstance()
{
	if (!instance)
	{
		instance = new Adon::ComponentManager();
	}

	return *instance;

}