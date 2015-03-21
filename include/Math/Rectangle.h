#ifndef ADON_RECTANGLE_H
#define ADON_RECTANGLE_H

#include "Point2.h"

namespace Adon
{
	struct Rectangle
	{
		union
		{
			struct
			{
				Point2 min, max;
			};

			struct
			{
				float left, top, right, bottom;
			};
		};

		Rectangle(const Point2& min = Point2(), const Point2& max = Point2()) :
			min(min), max(max)
		{}
	};

	static inline Point2 clamp(const Point2& P, const Rectangle& R)
	{
		return clamp(P, R.min, R.max);
	}

	static inline Point2 ClosestPoint(const Point2& P, const Rectangle& R)
	{
		return clamp(P, R);
	}

	static inline float ClosestDistance(const Point2& P, const Rectangle& R)
	{
		return length(P - ClosestPoint(P, R));
	}
}

#endif