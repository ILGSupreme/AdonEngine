#ifndef __RENDERER__H__
#define __RENDERER__H__

#include "RendererDriver.h"
#include "SpriteDescriptor.h"

namespace Adon
{
	namespace Graphics
	{
		class Renderer
		{
		public:
			void setDriver(RendererDriver& d);
			void prepare();
			void addSprite(SpriteDescriptor& s);
			void render();
			static Renderer& getInstance();
		private:
			Renderer();
			RendererDriver* driver;
			static Renderer instance;
		};

	}
}
#endif //__RENDERER__H__