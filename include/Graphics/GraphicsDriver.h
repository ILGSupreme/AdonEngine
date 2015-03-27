#ifndef GRAPHICS_DRIVER_H_
#define GRAPHICS_DRIVER_H_
#pragma once

namespace Adon
{
	class GraphicsDriver
	{
	public:
		virtual void AddSprites() = 0;
		virtual void Draw() = 0;
	};
}

#endif // !GRAPHICS_DRIVER_H_-
