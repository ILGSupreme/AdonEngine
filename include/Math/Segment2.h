#ifndef ADON_SEGMENT_2_H
#define ADON_SEGMENT_2_H

#include "Point2.h"
#include "Utilities.h"
#include "Vector2.h"

namespace Adon
{
	struct Segment2
	{
		union
		{
			struct
			{
				Point2 P1, P2;
			};

			struct
			{
				Point2 start, end;
			};
		};

		Segment2(const Point2& P1 = Point2(), const Point2& P2 = Point2()) :
			P1(P1), P2(P2)
		{}
	};

	static inline Point2 ClosestPoint(const Point2& P, const Segment2& s)
	{
		Point2 A = s.start;
		Point2 B = s.end;
		Vector2 u = B - A;
		Vector2 v = P - A;
		float t = clamp(dot(u, v) / dot(u, u), 0.0f, 1.0f);
		return A + t * u;
	}

	static inline float ClosestDistance(const Point2& P, const Segment2& s)
	{
		return length(P - ClosestPoint(P, s));
	}
}

#endif