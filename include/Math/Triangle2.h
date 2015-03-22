#ifndef ADON_TRIANGLE_2_H
#define ADON_TRIANGLE_2_H

#include "Point2.h"

namespace Adon
{
	struct Triangle2
	{
		union
		{
			struct
			{
				Point2 P1, P2, P3;
			};

			struct
			{
				Point2 A, B, C;
			};
		};

		Triangle2(const Point2& P1 = Point2(), const Point2& P2 = Point2(), const Point2& P3 = Point2()) :
			P1(P1), P2(P2), P3(P3)
		{}
	};

	static inline float SignedArea(const Triangle2& T)
	{
		return (T.A.x - T.C.x) * (T.B.y - T.C.y) - (T.A.y - T.C.y) * (T.B.x - T.C.x);
	}
}

#endif