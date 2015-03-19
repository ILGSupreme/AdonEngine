
#include "EntityManager.h"

Adon::EntityManager* Adon::EntityManager::instance = nullptr;

void Adon::EntityManager::CreateEntity()
{

}

void Adon::EntityManager::DestroyEntity()
{

}

std::vector<int>& Adon::EntityManager::GetEntities()
{
	return entities;
}

Adon::EntityManager& Adon::EntityManager::GetInstance()
{
	if (!instance)
	{
		instance = new Adon::EntityManager();
	}
	return *instance;
}
