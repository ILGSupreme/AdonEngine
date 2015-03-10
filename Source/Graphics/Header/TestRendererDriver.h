#ifndef __TEST__RENDERER__DRIVER__H__
#define __TEST__RENDERER__DRIVER__H__
#include "RendererDriver.h"

namespace Adon
{
	namespace Graphics
	{
		class TestRendererDriver : public RendererDriver
		{
		public:
			void prepare();

			void addSprite();

			void render();

		};
	}
}

#endif // !__TEST__RENDERER__DRIVER__H__
