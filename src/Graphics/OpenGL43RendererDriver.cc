#include "OpenGL43RendererDriver.h"
#include <windows.h>
#include "glew.h"

using namespace Adon;
using namespace Adon::Graphics;

void Adon::Graphics::OpenGL43RendererDriver::setViewportSize(int width, int height)
{
	viewportWidth = width;
	viewportHeight = height;
}

void Adon::Graphics::OpenGL43RendererDriver::render(SpriteDescriptor* sprites, int spriteCount)
{
	/*static const char * square_vs_source[] =
	{
	"#version 410 core                                                               \n"
	"                                                                                \n"
	"layout (location = 0) in vec4 position;                                         \n"
	"layout (location = 1) in vec4 instance_color;                                   \n"
	"layout (location = 2) in vec4 instance_position;                                \n"
	"                                                                                \n"
	"out Fragment                                                                    \n"
	"{                                                                               \n"
	"    vec4 color;                                                                 \n"
	"} fragment;                                                                     \n"
	"                                                                                \n"
	"void main(void)                                                                 \n"
	"{                                                                               \n"
	"    gl_Position = (position + instance_position) * vec4(0.25, 0.25, 1.0, 1.0);    \n"
	"    fragment.color = instance_color;                                            \n"
	"}                                                                               \n"
	};

	static const char * square_fs_source[] =
	{
	"#version 410 core                                                                \n"
	"precision highp float;                                                           \n"
	"                                                                                 \n"
	"in Fragment                                                                      \n"
	"{                                                                                \n"
	"    vec4 color;                                                                  \n"
	"} fragment;                                                                      \n"
	"                                                                                 \n"
	"out vec4 color;                                                                  \n"
	"                                                                                 \n"
	"void main(void)                                                                  \n"
	"{                                                                                \n"
	"    color = fragment.color;                                                      \n"
	"}                                                                                \n"
	};

	GLuint offset = 0;

	glGenVertexArrays(1, &square_vao);
	glGenBuffers(1, &square_buffer);
	glBindVertexArray(square_vao);
	glBindBuffer(GL_ARRAY_BUFFER, square_buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(square_vertices)+sizeof(instance_colors)+sizeof(instance_positions), NULL, GL_STATIC_DRAW);
	glBufferSubData(GL_ARRAY_BUFFER, offset, sizeof(square_vertices), square_vertices);
	offset += sizeof(square_vertices);
	glBufferSubData(GL_ARRAY_BUFFER, offset, sizeof(instance_colors), instance_colors);
	offset += sizeof(instance_colors);
	glBufferSubData(GL_ARRAY_BUFFER, offset, sizeof(instance_positions), instance_positions);
	offset += sizeof(instance_positions);

	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 0, 0);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 0, (GLvoid *)sizeof(square_vertices));
	glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, 0, (GLvoid *)(sizeof(square_vertices)+sizeof(instance_colors)));

	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	glEnableVertexAttribArray(2);

	glVertexAttribDivisor(1, 1);
	glVertexAttribDivisor(2, 1);

	square_program = glCreateProgram();

	GLuint square_vs = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(square_vs, 1, square_vs_source, NULL);
	glCompileShader(square_vs);
	glAttachShader(square_program, square_vs);
	GLuint square_fs = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(square_fs, 1, square_fs_source, NULL);
	glCompileShader(square_fs);
	glAttachShader(square_program, square_fs);

	glLinkProgram(square_program);
	glDeleteShader(square_vs);
	glDeleteShader(square_fs);
	}*/

	//void shutdown(void)
	//{
	//	glDeleteProgram(square_program);
	//	glDeleteBuffers(1, &square_buffer);
	//	glDeleteVertexArrays(1, &square_vao);
	//}

	//static const GLfloat black[] = { 0.0f, 0.0f, 0.0f, 0.0f };
	//glClearBufferfv(GL_COLOR, 0, black);

	//glUseProgram(square_program);
	//glBindVertexArray(square_vao);
	//glDrawArraysInstanced(GL_TRIANGLE_FAN, 0, 4, 4);

}

Adon::Graphics::OpenGL43RendererDriver::OpenGL43RendererDriver()
{

}

OpenGL43RendererDriver& Adon::Graphics::OpenGL43RendererDriver::getInstance()
{
	return instance;
}

OpenGL43RendererDriver Adon::Graphics::OpenGL43RendererDriver::instance;
