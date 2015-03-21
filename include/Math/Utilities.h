#ifndef ADON_MATH_UTILITIES_H
#define ADON_MATH_UTILITIES_H

namespace Adon
{
	static inline float min(float a, float b)
	{
		return a < b ? a : b;
	}

	static inline float max(float a, float b)
	{
		return a > b ? a : b;
	}

	static inline float clamp(float n, float lower, float upper)
	{
		return min(upper, max(lower, n));
	}
}

#endif