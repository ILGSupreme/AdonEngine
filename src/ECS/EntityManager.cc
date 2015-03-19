#include "EntityManager.h"

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
	static EntityManager instance;
	return instance;
}
