#ifndef WINDOW_H_
#define WINDOW_H_

namespace Adon
{
	// Abstract Class
	// This is the GUI abstract class , inherit this to implement your own GUI class.
	class Window
	{
	public:
		virtual void update() = 0;
	};

}

#endif // !WINDOW_H_
