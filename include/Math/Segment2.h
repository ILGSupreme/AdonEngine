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
}

#endif