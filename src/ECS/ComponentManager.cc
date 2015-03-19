#include "ComponentManager.h"

void Adon::ComponentManager::RegisterComponent()
{

}

Adon::ComponentManager& Adon::ComponentManager::GetInstance()
{
	static ComponentManager instance;
	return instance;
}