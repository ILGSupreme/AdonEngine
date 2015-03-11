#ifndef __OPENGL11__RENDERER__DRIVER__H__
#define __OPENGL11__RENDERER__DRIVER__H__

#include "RendererDriver.h"
#include <vector>

namespace Adon
{
	namespace Graphics
	{
		class OpenGL11RendererDriver : public RendererDriver
		{
		public:
			void setViewportSize(int width, int height);
			void prepare();
			void addSprite(SpriteDescriptor& s);
			void render();
			static OpenGL11RendererDriver& getInstance();
		private:
			OpenGL11RendererDriver();
			int viewportWidth;
			int viewportHeight;
			std::vector<SpriteDescriptor> sprites;
			static OpenGL11RendererDriver instance;
		};
	}
}

#endif // !__OPENGL11__RENDERER__DRIVER__H__
