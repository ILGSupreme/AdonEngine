#ifndef MESSAGE_DISPATCHER_H_
#define MESSAGE_DISPATCHER_H_

#include "Message.h"
#include <memory>

namespace Adon
{
	class MessageReceiver
	{
	public:
		virtual void OnMessage(std::shared_ptr<Message> m) = 0;
	};
}


#endif