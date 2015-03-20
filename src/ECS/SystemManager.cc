#include "SystemManager.h"

void Adon::SystemManager::RegisterSystem(System& system)
{
	systems.push_back(&system);
}

void Adon::SystemManager::OnMessage(std::shared_ptr<Message> m)
{
	for (auto s : systems)
		s->OnMessage(m);
}

Adon::SystemManager& Adon::SystemManager::GetInstance()
{
	static SystemManager instance;
	return instance;
}
