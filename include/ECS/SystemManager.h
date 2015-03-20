#ifndef SYSTEM_MANAGER_H_
#define SYSTEM_MANAGER_H_

#include "System.h"
#include "Messaging/MessageReceiver.h"
#include <vector>

namespace Adon
{
	class SystemManager : public MessageReceiver
	{
	public:
		void RegisterSystem(System& system);
		void OnMessage(std::shared_ptr<Message> m) override;
		static SystemManager& GetInstance();
	private:
		std::vector<System*> systems;

		// To avoid accidental instantiation of singleton
		SystemManager() {};
		SystemManager(SystemManager const&) = delete;
		void operator=(SystemManager const&) = delete;
	};
}


#endif