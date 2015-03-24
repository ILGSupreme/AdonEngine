#include "GLFWWindowDriver.h"
#include "glfw3.h"
#include <iostream>

static GLFWwindow* window;

static void ErrorCallback(int error, const char* description)
{
	std::cerr << "GLFWWindowDriver error: " << description << std::endl;
}

void Adon::GLFWWindowDriver::Open()
{
	glfwSetErrorCallback(ErrorCallback);

	if (!glfwInit())
		exit(EXIT_FAILURE);

	window = glfwCreateWindow(640, 480, "Adon Engine", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	isRunning = true;
}

void Adon::GLFWWindowDriver::Update()
{
	if (isRunning)
	{
		glfwSwapBuffers(window);
		glfwPollEvents();

		if (glfwWindowShouldClose(window))
		{
			isRunning = false;
			glfwDestroyWindow(window);
			glfwTerminate();
		}
	}
}

bool Adon::GLFWWindowDriver::IsRunning()
{
	return isRunning;
}

Adon::GLFWWindowDriver& Adon::GLFWWindowDriver::GetInstance()
{
	static GLFWWindowDriver instance;
	return instance;
}
