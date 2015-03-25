#ifndef OPENGL43_DRIVER_H_
#define OPENGL43_DRIVER_H_
#pragma once

#include "../deps/GLEW/glew.h"

namespace Adon
{
	class OpenGL43Driver
	{
	public:
		//this is only for show and will be changed
		void InitShaders();
		void Startup();
		void Render();
		static OpenGL43Driver& GetInstance();
		void Activate();
		void Deactivate();
	private:
		bool active;
		OpenGL43Driver() {};
		OpenGL43Driver(OpenGL43Driver const&) = delete;
		void operator=(OpenGL43Driver const&) = delete;
		GLuint square_buffer;
		GLuint square_vao;
		GLuint square_program;
	};
}


#endif // !OPENGL43_H_
