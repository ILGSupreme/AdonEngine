#ifndef ADON_MATH_UTILITIES_H
#define ADON_MATH_UTILITIES_H

#include <algorithm>

namespace Adon
{
	static inline float clamp(float n, float lower, float upper)
	{
		return std::min(upper, std::max(lower, n));
	}
}

#endif