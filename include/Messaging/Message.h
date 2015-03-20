#ifndef MESSAGE_H
#define MESSAGE_H


namespace Adon
{
	class Message
	{
	public:
		virtual unsigned int GetTypeId() = 0;
	};
}


#endif