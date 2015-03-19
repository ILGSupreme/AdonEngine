#ifndef MESSAGE_RECEIVER_H_
#define MESSAGE_RECEIVER_H_

#include "MessageReceiver.h"
#include <vector>

namespace Adon
{
	class MessageDispatcher
	{
	public:
		void RegisterReceiver(MessageReceiver* rec);
		void SendMessage();
		void SendDelayedMessage();
		static MessageDispatcher& GetInstance();
	private:
		std::vector<MessageReceiver*> messagereceivers;
		static MessageDispatcher* instance;
	};
}


#endif