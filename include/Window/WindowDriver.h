#ifndef WINDOW_DRIVER_H
#define WINDOW_DRIVER_H

namespace Adon
{
	class WindowDriver
	{
	public:
		virtual void Open() = 0;
		virtual void Update() = 0;
		virtual bool IsRunning() = 0;
	};
}

#endif
