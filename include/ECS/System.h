#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "Messaging/Message.h"
#include <memory>

namespace Adon
{
	class System
	{
	public:
		virtual void OnMessage(std::shared_ptr<Message> m) = 0;
	};
}


#endif // !SYSTEM_H_
