#ifndef ADON_CLOSEST_POINT_H
#define ADON_CLOSEST_POINT_H

#include "Circle.h"
#include "Line2.h"
#include "Point2.h"
#include "Ray2.h"
#include "Rectangle.h"
#include "Segment2.h"

namespace Adon
{
	/*
	* Find the point on line L closest to point P.
	*/
	static inline Point2 ClosestPoint(const Point2& P, const Line2& L)
	{
		Point2 A = L.P1;
		Point2 B = L.P2;
		Vector2 u = B - A;
		Vector2 v = P - A;
		float t = dot(u, v) / dot(u, u);
		return A + t * u;
	}

	/*
	* Find the point on ray R closest to point P.
	*/
	static inline Point2 ClosestPoint(const Point2& P, const Ray2& R)
	{
		Point2 A = R.start;
		Vector2 u = R.d;
		Vector2 v = P - A;
		float t = max(dot(u, v) / dot(u, u), 0.0f);
		return A + t * u;
	}

	/*
	* Find the point on line segment S closest to point P.
	*/
	static inline Point2 ClosestPoint(const Point2& P, const Segment2& S)
	{
		Point2 A = S.start;
		Point2 B = S.end;
		Vector2 u = B - A;
		Vector2 v = P - A;
		float t = clamp(dot(u, v) / dot(u, u), 0.0f, 1.0f);
		return A + t * u;
	}

	/*
	* Find the point on circle C closest to point P.
	*/
	static inline Point2 ClosestPoint(const Point2& P, const Circle& C)
	{
		return C.center + unit(P - C.center) * C.radius;
	}

	/*
	* Find the point on rectangle R closest to point P.
	*/
	static inline Point2 ClosestPoint(const Point2& P, const Rectangle& R)
	{
		return clamp(P, R);
	}
}

#endif