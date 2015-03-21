#ifndef ADON_LINE_2_H
#define ADON_LINE_2_H

#include "Point2.h"
#include "Vector2.h"

namespace Adon
{
	struct Line2
	{
		union
		{
			struct
			{
				Point2 P1, P2;
			};
		};

		Line2(const Point2& P1 = Point2(), const Point2& P2 = Point2()) :
			P1(P1), P2(P2)
		{}
	};

	static inline Point2 ClosestPoint(const Point2& P, const Line2& L)
	{
		Point2 A = L.P1;
		Point2 B = L.P2;
		Vector2 u = B - A;
		Vector2 v = P - A;
		float t = dot(u, v) / dot(u, u);
		return A + t * u;
	}

	static inline float ClosestDistance(const Point2& P, const Line2& L)
	{
		return length(P - ClosestPoint(P, L));
	}
}

#endif