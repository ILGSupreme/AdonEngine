#include "MessageDispatcher.h"

void Adon::MessageDispatcher::RegisterReceiver(MessageReceiver& r)
{
	messageReceivers.push_back(&r);
}

void Adon::MessageDispatcher::SendMessage(std::shared_ptr<Message> m)
{
	for (auto r : messageReceivers)
		r->OnMessage(m);
}

void Adon::MessageDispatcher::SendDelayedMessage()
{

}

Adon::MessageDispatcher& Adon::MessageDispatcher::GetInstance()
{
	static MessageDispatcher instance;
	return instance;
}
