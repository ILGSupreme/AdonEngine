#ifndef __GRAPHICS__OBJECT__H__
#define __GRAPHICS__OBJECT__H__

namespace Adon
{
	namespace Graphics
	{
		class GraphicsObject
		{
		public:
			void getGraphicsInstance();
		private:
			unsigned int vao;
		};
	}
}

#endif // !GraphicsObject
