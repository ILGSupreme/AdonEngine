#include "Renderer.h"

namespace Adon
{
	namespace Graphics
	{
		Renderer& Renderer::getInstance()
		{
			return instance;
		}

		Renderer::Renderer()
		{

		}

		void Renderer::setDriver(RendererDriver& d)
		{
			driver = &d;
		}

		void Renderer::setViewportSize(int width, int height)
		{
			driver->setViewportSize(width, height);
		}

		void Renderer::render(SpriteDescriptor* sprites, int spriteCount)
		{
			driver->render(sprites, spriteCount);
		}

		Renderer Renderer::instance;
	}
}
