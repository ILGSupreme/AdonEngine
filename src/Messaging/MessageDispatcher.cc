#include "MessageDispatcher.h"

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
	static MessageDispatcher instance;
	return instance;
}
