#include "OpenGL11RendererDriver.h"
#include <windows.h>
#include <gl/gl.h>

using namespace Adon;
using namespace Adon::Graphics;

void Adon::Graphics::OpenGL11RendererDriver::setViewportSize(int width, int height)
{
	viewportWidth = width;
	viewportHeight = height;
}

void Adon::Graphics::OpenGL11RendererDriver::prepare()
{
	sprites.clear();
}

void Adon::Graphics::OpenGL11RendererDriver::addSprite(SpriteDescriptor& s)
{
	sprites.push_back(s);
}

void Adon::Graphics::OpenGL11RendererDriver::render()
{
	glViewport(0, 0, viewportWidth, viewportHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, viewportWidth, viewportHeight, 0, 0, 100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);

	for (auto& s : sprites) {
		float l = s.x;
		float r = l + s.width;
		float t = s.y;
		float b = t + s.height;
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2f(l, t);
		glVertex2f(l, b);
		glVertex2f(r, b);
		glVertex2f(r, t);
		glEnd();
	}
}

Adon::Graphics::OpenGL11RendererDriver::OpenGL11RendererDriver()
{

}

OpenGL11RendererDriver& Adon::Graphics::OpenGL11RendererDriver::getInstance()
{
	return instance;
}

OpenGL11RendererDriver Adon::Graphics::OpenGL11RendererDriver::instance;
