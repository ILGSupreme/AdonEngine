#ifndef GLFW_WINDOW_H_
#define GLFW_WINDOW_H_

#include "Window.h"
#include "glfw3.h"

class GLFWWindow : public Adon::Window
{
public:
	virtual void update() override;
	void setup();
	void close();
	static void error_callback(int error, const char* description);
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
private:
	GLFWwindow* window;
};


#endif // !GLFW_WINDOW_H_
