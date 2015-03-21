#ifndef ADON_POINT_2_H
#define ADON_POINT_2_H

#include "Utilities.h"
#include "Vector2.h"

namespace Adon
{
	struct Point2
	{
		union
		{
			struct
			{
				float x, y;
			};

			float buffer[2];
		};

		Point2(float x = 0, float y = 0) :
			x(x), y(y)
		{}

		float operator[] (size_t index)
		{
			return buffer[index];
		}
	};

	static inline bool operator== (const Point2& P1, const Point2& P2)
	{
		return P1.x == P2.x && P1.y == P2.y;
	}

	static inline Point2 operator+ (const Point2& P, const Vector2& v)
	{
		return Point2(P.x + v.x, P.y + v.y);
	}

	static inline Point2 operator- (const Point2& P, const Vector2& v)
	{
		return Point2(P.x - v.x, P.y - v.y);
	}

	static inline Vector2 operator- (const Point2& P1, const Point2& P2)
	{
		return Vector2(P1.x - P2.x, P1.y - P2.y);
	}

	static inline Point2 min(const Point2& P1, const Point2& P2)
	{
		return Point2(std::min(P1.x, P2.x), std::min(P1.y, P2.y));
	}

	static inline Point2 max(const Point2& P1, const Point2& P2)
	{
		return Point2(std::max(P1.x, P2.x), std::max(P1.y, P2.y));
	}

	static inline Point2 clamp(const Point2& P, const Point2& lower, const Point2& upper)
	{
		return Point2(clamp(P.x, lower.x, upper.x), clamp(P.y, lower.y, upper.y));
	}

	static inline Vector2 ToVector2(const Point2& P)
	{
		return Vector2(P.x, P.y);
	}

	static inline Point2 ToPoint2(const Vector2& v)
	{
		return Point2(v.x, v.y);
	}
}

#endif