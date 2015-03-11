#ifndef __RENDERER__DRIVER__H__
#define __RENDERER__DRIVER__H__

#include "SpriteDescriptor.h"

namespace Adon
{
	namespace Graphics
	{
		class RendererDriver
		{
		public:
			virtual void setViewportSize(int width, int height) = 0;
			virtual void render(SpriteDescriptor* sprites, int spriteCount) = 0;
		};
	}
}

#endif // !__RENDERER__DRIVER__H__
