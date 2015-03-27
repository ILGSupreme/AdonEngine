#ifndef OPENGL43_DRIVER_H_
#define OPENGL43_DRIVER_H_
#pragma once

#include "../deps/GLEW/glew.h"
#include "Graphics/GraphicsDriver.h"

namespace Adon
{
	class OpenGL43Driver : GraphicsDriver
	{
	public:
		//this is only for show and will be changed
		void InitShaders();
		void Startup();
		void Render();
		// Virtual Overridden Functions
		virtual void AddSprites(Sprite sprites[],unsigned int size) override;
		virtual void AddSprites(std::vector<Sprite>& sprites);
		virtual void Draw() override;
		static OpenGL43Driver& GetInstance();
	private:
		OpenGL43Driver() {};
		OpenGL43Driver(OpenGL43Driver const&) = delete;
		void operator=(OpenGL43Driver const&) = delete;
		GLuint square_buffer;
		GLuint square_vao;
		GLuint square_program;
	};
}


#endif // !OPENGL43_H_
