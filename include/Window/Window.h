#ifndef WINDOW_H_
#define WINDOW_H_

#include "WindowDriver.h"

namespace Adon
{
	class Window
	{
	public:
		void SetDriver(WindowDriver& d);
		void Open();
		void Update();
		bool IsRunning();

		static Window& GetInstance();
	private:
		WindowDriver* driver;

		// To avoid accidental instantiation of singleton
		Window() {};
		Window(Window const&) = delete;
		void operator=(Window const&) = delete;
	};
}

#endif // !WINDOW_H_
