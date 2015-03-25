#include "GLFWWindowDriver.h"
#include "Graphics.h"
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

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(640, 480, "Adon Engine", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	GLenum err = glewInit();
	if (GLEW_OK != err)
	{
		/* Problem: glewInit failed, something is seriously wrong. */
		fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
		std::cin.get();
	}

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
