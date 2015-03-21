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

	static inline Point2 ClosestPoint(const Point2& P, const Circle& C)
	{
		return C.center + unit(P - C.center) * C.radius;
	}

	static inline float ClosestDistance(const Point2& P, const Circle& C)
	{
		return length(P - C.center) - C.radius;
	}
}

#endif