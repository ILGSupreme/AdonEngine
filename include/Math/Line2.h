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
}

#endif