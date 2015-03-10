#ifndef __RENDERER__H__
#define __RENDERER__H__

class Renderer
{
public:
	static Renderer& getInstance();
private:
	Renderer();
	static Renderer instance;
};

#endif //__RENDERER__H__