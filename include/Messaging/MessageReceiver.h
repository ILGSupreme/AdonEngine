#ifndef MESSAGE_DISPATCHER_H_
#define MESSAGE_DISPATCHER_H_

namespace Adon
{
	class MessageReceiver
	{
	public:
		virtual void OnMessage() = 0;
	};
}


#endif