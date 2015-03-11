#ifndef __SPRITE__DESCRIPTOR__H__
#define __SPRITE__DESCRIPTOR__H__

struct SpriteDescriptor
{
	struct { float x, y; } position;
	struct { float x, y; } size;
	struct { float r, g, b, a; } color;
};

#endif //__SPRITE__DESCRIPTOR__H__