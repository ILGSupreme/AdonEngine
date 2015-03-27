#ifndef SPRITE_H_
#define SPRITE_H_

#include "Math/Vector2.h"

struct Sprite
{
	Sprite(Adon::Vector2 pos) : pos(pos){ };
	Adon::Vector2 pos;
};


#endif // !SPRITE_H_
