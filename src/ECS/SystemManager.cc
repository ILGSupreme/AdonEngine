
#include "SystemManager.h"

Adon::SystemManager* Adon::SystemManager::instance = nullptr;

void Adon::SystemManager::RegisterSystem(System& system)
{
	systems.push_back(&system);
}

void Adon::SystemManager::OnMessage()
{

}

Adon::SystemManager& Adon::SystemManager::GetInstance()
{
	if (!instance)
	{
		instance = new Adon::SystemManager();
	}
	return *instance;
}
