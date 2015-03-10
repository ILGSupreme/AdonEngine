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
		void Renderer::setDriver(RendererDriver& driver)
		{
			this->driver = &driver;
		}

		void Renderer::prepare()
		{
			driver->prepare();
		}

		void Renderer::addSprite()
		{
			driver->addSprite();
		}

		void Renderer::render()
		{
			driver->render();
		}

		Renderer Renderer::instance;
	}
}
