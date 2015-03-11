//Include GLEW  
//#include "glew.h"

//Include GLFW  
#include "glfw3.h"

//Include the standard C++ headers  
#include <stdio.h>  
#include <stdlib.h>	
#include <math.h>
#include "Adon.h"
#include "TestRendererDriver.h"
#include "OpenGL11RendererDriver.h"

using namespace Adon;
using namespace Adon::Graphics;

static void error_callback(int error, const char* description)
{
	fputs(description, stderr);
	_fgetchar();
}

//Define the key input callback  
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
}

int main(void)
{
	//Set the error callback  
	glfwSetErrorCallback(error_callback);

	//Initialize GLFW  
	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	//Set the GLFW window creation hints - these are optional  
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1); //Request a specific OpenGL version  
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1); //Request a specific OpenGL version  
	//glfwWindowHint(GLFW_SAMPLES, 4); //Request 4x antialiasing  
	//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Declare a window object  
	GLFWwindow* window;

	//Create a window and create its OpenGL context  
	window = glfwCreateWindow(640, 480, "Test Window", NULL, NULL);

	//TEST CODE!
	int windowHeight = 640;
	int windowWidth = 480;

	//If the window couldn't be created  
	if (!window)
	{
		fprintf(stderr, "Failed to open GLFW window.\n");
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//This function makes the context of the specified window current on the calling thread.   
	glfwMakeContextCurrent(window);

	//Sets the key callback  
	glfwSetKeyCallback(window, key_callback);

	Renderer& renderer = Renderer::getInstance();
	renderer.setDriver(OpenGL11RendererDriver::getInstance());
	renderer.setViewportSize(640, 480);

	//Main Loop  
	do
	{
		SpriteDescriptor sprites[2];
		sprites[0].position.x = 32;
		sprites[0].position.y = 32;
		sprites[0].size.x = 64;
		sprites[0].size.y = 64;
		sprites[0].color.r = 1;
		sprites[0].color.g = 0;
		sprites[0].color.b = 0;
		sprites[1].position.x = 80;
		sprites[1].position.y = 80;
		sprites[1].size.x = 128;
		sprites[1].size.y = 32;
		sprites[1].color.r = 1;
		sprites[1].color.g = 0;
		sprites[1].color.b = 1;

		//Clear color buffer  
		//glClear(GL_COLOR_BUFFER_BIT);
		//const GLfloat clearbuffervar[] = { 0.1f, 1.0f, 1.0f, 1.0f };
		//RENDER//
		//glClearBufferfv(GL_COLOR, 0, clearbuffervar);
		renderer.render(sprites, sizeof(sprites) / sizeof(SpriteDescriptor));
		//Swap buffers  
		glfwSwapBuffers(window);

		//Get and organize events, like keyboard and mouse input, window resizing, etc...  
		glfwPollEvents();

	} //Check if the ESC key had been pressed or if the window had been closed  
	while (!glfwWindowShouldClose(window));

	//End Function!

	//Close OpenGL window and terminate GLFW  
	glfwDestroyWindow(window);
	//Finalize and clean up GLFW  
	glfwTerminate();

	exit(EXIT_SUCCESS);
}