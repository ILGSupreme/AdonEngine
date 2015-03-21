#ifndef ADON_CIRCLE_H
#define ADON_CIRCLE_H

#include "Point2.h"

namespace Adon
{
	struct Circle
	{
		union
		{
			struct
			{
				Point2 C;
				float r;
			};

			struct
			{
				Point2 center;
				float radius;
			};
		};

		Circle(const Point2& C = Point2(), float r = 1.0f) :
			C(C), r(r)
		{}
	};
}

#endif