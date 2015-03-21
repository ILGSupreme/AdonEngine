#ifndef ADON_CLOSEST_DISTANCE_H
#define ADON_CLOSEST_DISTANCE_H

#include "Circle.h"
#include "ClosestPoint.h"
#include "Line2.h"
#include "Point2.h"
#include "Ray2.h"
#include "Rectangle.h"
#include "Segment2.h"

namespace Adon
{
	/*
	* Find closest distance between points P1 and P2.
	*/
	static inline float ClosestDistance(const Point2& P1, const Point2& P2)
	{
		return length(P2 - P1);
	}

	/*
	* Find closest distance between point P and line L.
	*/
	static inline float ClosestDistance(const Point2& P, const Line2& L)
	{
		return length(P - ClosestPoint(P, L));
	}

	/*
	* Find closest distance between point P and ray R.
	*/
	static inline float ClosestDistance(const Point2& P, const Ray2& R)
	{
		return length(P - ClosestPoint(P, R));
	}

	/*
	* Find closest distance between point P and line segment S.
	*/
	static inline float ClosestDistance(const Point2& P, const Segment2& S)
	{
		return length(P - ClosestPoint(P, S));
	}

	/*
	* Find closest distance between point P and circle C.
	*/
	static inline float ClosestDistance(const Point2& P, const Circle& C)
	{
		return length(P - C.center) - C.radius;
	}

	/*
	* Find closest distance between point P and rectangle R.
	*/
	static inline float ClosestDistance(const Point2& P, const Rectangle& R)
	{
		return length(P - ClosestPoint(P, R));
	}
}

#endif