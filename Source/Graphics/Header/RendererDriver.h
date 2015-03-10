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
			virtual void prepare() = 0;
			virtual void addSprite(SpriteDescriptor& s) = 0;
			virtual void render() = 0;
		};
	}
}

#endif // !__RENDERER__DRIVER__H__
