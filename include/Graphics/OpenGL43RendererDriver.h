#ifndef OPENGL_43_RENDERER_DRIVER
#define OPENGL_43_RENDERER_DRIVER

#include "RendererDriver.h"
#include <vector>

namespace Adon
{
	namespace Graphics
	{
		class OpenGL43RendererDriver : public RendererDriver
		{
		public:
			void setViewportSize(int width, int height);
			void render(SpriteDescriptor* sprites, int spriteCount);
			static OpenGL43RendererDriver& getInstance();
		private:
			OpenGL43RendererDriver();
			int viewportWidth;
			int viewportHeight;
			std::vector<SpriteDescriptor> sprites;
			static OpenGL43RendererDriver instance;
		};
	}
}

#endif // !OPENGL_4_3_RENDERER_DRIVER
