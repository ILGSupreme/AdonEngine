
#include "MessageDispatcher.h"

Adon::MessageDispatcher* Adon::MessageDispatcher::instance = nullptr;

void Adon::MessageDispatcher::RegisterReceiver(MessageReceiver* rec)
{

}

void Adon::MessageDispatcher::SendMessage()
{

}

void Adon::MessageDispatcher::SendDelayedMessage()
{

}

Adon::MessageDispatcher& Adon::MessageDispatcher::GetInstance()
{
	if (!instance)
	{
		instance = new Adon::MessageDispatcher();
	}
	return *instance;
}
