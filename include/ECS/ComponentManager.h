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
		// To avoid accidental instantiation of singleton
		ComponentManager() {};
		ComponentManager(ComponentManager const&) = delete;
		void operator=(ComponentManager const&) = delete;
	};
}


#endif