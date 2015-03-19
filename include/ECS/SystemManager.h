#ifndef SYSTEM_MANAGER_H_
#define SYSTEM_MANAGER_H_

#include "System.h"
#include "MessageReceiver.h"
#include <vector>

namespace Adon
{
	class SystemManager : public MessageReceiver
	{
	public:
		void RegisterSystem(System& system);
		void OnMessage() override;
		static SystemManager& GetInstance();
	private:
		std::vector<System*> systems;
		static SystemManager* instance;
	};
}


#endif