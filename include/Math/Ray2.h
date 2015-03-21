#ifndef ADON_RAY_2_H
#define ADON_RAY_2_H

#include "Point2.h"
#include "Utilities.h"
#include "Vector2.h"

namespace Adon
{
	struct Ray2
	{
		union
		{
			struct
			{
				Point2 P;
				Vector2 d;
			};

			struct
			{
				Point2 start;
				Vector2 direction;
			};
		};

		Ray2(const Point2& P = Point2(), const Vector2& d = Vector2()) :
			P(P), d(d)
		{}
	};

	static inline Point2 ClosestPoint(const Point2& P, const Ray2& R)
	{
		Point2 A = R.start;
		Vector2 u = R.d;
		Vector2 v = P - A;
		float t = std::max(dot(u, v) / dot(u, u), 0.0f);
		return A + t * u;
	}

	static inline float ClosestDistance(const Point2& P, const Ray2& R)
	{
		return length(P - ClosestPoint(P, R));
	}
}

#endif