#ifndef GLFW_WINDOW_DRIVER_H
#define GLFW_WINDOW_DRIVER_H


#include "WindowDriver.h"

class OpenGL43Driver;

namespace Adon
{
	class GLFWWindowDriver : public Adon::WindowDriver
	{
	public:
		virtual void Open() override;
		virtual void Update() override;
		virtual bool IsRunning() override;

		static GLFWWindowDriver& GetInstance();
	private:
		bool isRunning;
		// To avoid accidental instantiation of singleton
		GLFWWindowDriver() {};
		GLFWWindowDriver(GLFWWindowDriver const&) = delete;
		void operator=(GLFWWindowDriver const&) = delete;
	};
}

#endif // !GLFW_WINDOW_DRIVER_H
