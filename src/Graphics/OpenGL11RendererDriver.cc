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

void Adon::Graphics::OpenGL11RendererDriver::render(SpriteDescriptor* sprites, int spriteCount)
{
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glViewport(0, 0, viewportWidth, viewportHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, viewportWidth, viewportHeight, 0, 0, 100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < spriteCount; i++) {
		auto& s = sprites[i];
		float l = s.position.x;
		float r = l + s.size.x;
		float t = s.position.y;
		float b = t + s.size.y;
		glColor4f(s.color.r, s.color.g, s.color.b, s.color.a);
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
