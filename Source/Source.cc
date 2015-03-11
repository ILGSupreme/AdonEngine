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

	//Initialize GLEW  
	/*GLenum err = glewInit();

	//If GLEW hasn't initialized  
	if (err != GLEW_OK)
	{
		fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
		return -1;
	}*/

	Renderer& renderer = Renderer::getInstance();
	renderer.setDriver(OpenGL11RendererDriver::getInstance());
	renderer.setViewportSize(640, 480);

	//Set a background color  
	glClearColor(0.0f, 0.3f, 0.8f, 1.0f);

	//Main Loop  
	do
	{
		renderer.prepare();

		SpriteDescriptor sprite;
		sprite.position.x = 32;
		sprite.position.y = 32;
		sprite.size.x = 64;
		sprite.size.y = 64;
		sprite.color.r = 1;
		sprite.color.g = 0;
		sprite.color.b = 0;
		renderer.addSprite(sprite);

		//Clear color buffer  
		//glClear(GL_COLOR_BUFFER_BIT);
		//const GLfloat clearbuffervar[] = { 0.1f, 1.0f, 1.0f, 1.0f };
		//RENDER//
		//glClearBufferfv(GL_COLOR, 0, clearbuffervar);
		renderer.render();
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