#ifndef COMPONENT_MANAGER_H_
#define COMPONENT_MANAGER_H_

namespace Adon
{
	class ComponentManager
	{
	public:
		void RegisterComponent();
		static ComponentManager& GetInstance();
	private:
		static ComponentManager* instance;
	};
}


#endif