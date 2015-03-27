#ifndef GRAPHICS_DRIVER_H_
#define GRAPHICS_DRIVER_H_
#pragma once

#include "Graphics/Sprite.h"
#include <vector>

namespace Adon
{
	class GraphicsDriver
	{
	public:
		virtual void AddSprites(Sprite sprites[],unsigned int size) = 0;
		virtual void AddSprites(std::vector<Sprite>& sprites) = 0;
		virtual void Draw() = 0;
	};
}

#endif // !GRAPHICS_DRIVER_H_-
