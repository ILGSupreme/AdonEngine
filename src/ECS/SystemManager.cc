#include "SystemManager.h"

void Adon::SystemManager::RegisterSystem(System& system)
{
	systems.push_back(&system);
}

void Adon::SystemManager::OnMessage()
{

}

Adon::SystemManager& Adon::SystemManager::GetInstance()
{
	static SystemManager instance;
	return instance;
}
