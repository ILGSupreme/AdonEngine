#ifndef ENTITY_MANAGER_H_
#define ENTITY_MANAGER_H_
#pragma once
#include <vector> 

namespace Adon
{
	class EntityManager
	{
	public:
		void CreateEntity();
		void DestroyEntity();
		std::vector<int>& GetEntities();
		static EntityManager& GetInstance();

	private:
		std::vector<int> entities;

		// To avoid accidental instantiation of singleton
		EntityManager() {};
		EntityManager(EntityManager const&) = delete;
		void operator=(EntityManager const&) = delete;
	};
}


#endif