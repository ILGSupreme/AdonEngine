#ifndef ENTITY_MANAGER_H_
#define ENTITY_MANAGER_H_

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
		static EntityManager* instance;
	};
}


#endif