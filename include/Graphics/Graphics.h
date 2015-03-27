#ifndef GRAPHICS_H_
#define GRAPHICS_H_
#pragma once
#include "Graphics/GFXDrivers.h"

namespace Adon
{
	class Graphics
	{
	public:
		void SetDriver(GraphicsDriver& gfxdriver);
		void AddSprites();
		void Draw();
		static Graphics& GetInstance();
	private:
		GraphicsDriver* gfxdriver;
		Graphics() {};
		Graphics(Graphics const&) = delete;
		void operator=(Graphics const&) = delete;
	};
}

#endif // !GRAPHICS_H_
