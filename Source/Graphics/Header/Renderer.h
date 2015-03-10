#ifndef __RENDERER__H__
#define __RENDERER__H__

#include "RendererDriver.h"

namespace Adon
{
	namespace Graphics
	{
		class Renderer
		{
		public:
			void setDriver(RendererDriver& driver);
			void prepare();
			void addSprite();
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