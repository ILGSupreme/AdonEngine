#ifndef GRAPHICS_DRIVER_H_
#define GRAPHICS_DRIVER_H_
#pragma once

namespace Adon
{
	class GraphicsDriver
	{
	public:
		template<typename GDRIVER>
		GDRIVER& GetDriver()
		{
			return GDRIVER::GetInstance();
		}

		static GraphicsDriver& GetInstance()
		{
			static GraphicsDriver instance;
			return instance;
		}
	private:
		GraphicsDriver() {};
		GraphicsDriver(GraphicsDriver const&) = delete;
		void operator=(GraphicsDriver const&) = delete;
	};
}

#endif // !GRAPHICS_DRIVER_H_
