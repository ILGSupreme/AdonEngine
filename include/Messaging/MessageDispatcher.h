#ifndef MESSAGE_RECEIVER_H_
#define MESSAGE_RECEIVER_H_

#include "Message.h"
#include "MessageReceiver.h"
#include <memory>
#include <vector>

namespace Adon
{
	class MessageDispatcher
	{
	public:
		void RegisterReceiver(MessageReceiver& r);
		void SendMessage(std::shared_ptr<Message> m);
		void SendDelayedMessage();
		static MessageDispatcher& GetInstance();
	private:
		std::vector<MessageReceiver*> messageReceivers;

		// To avoid accidental instantiation of singleton
		MessageDispatcher() {};
		MessageDispatcher(MessageDispatcher const&) = delete;
		void operator=(MessageDispatcher const&) = delete;
	};
}


#endif