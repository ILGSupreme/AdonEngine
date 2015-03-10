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

		void Renderer::prepare()
		{
			driver->prepare();
		}

		void Renderer::addSprite(SpriteDescriptor& s)
		{
			driver->addSprite(s);
		}

		void Renderer::render()
		{
			driver->render();
		}

		Renderer Renderer::instance;
	}
}
