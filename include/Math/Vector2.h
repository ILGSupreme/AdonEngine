#ifndef ADON_VECTOR_2_H
#define ADON_VECTOR_2_H

#include "Utilities.h"
#include <cmath>

namespace Adon
{
	struct Vector2
	{
		union
		{
			struct
			{
				float x, y;
			};

			float buffer[2];
		};

		Vector2(float x = 0, float y = 0) :
			x(x), y(y)
		{}

		float operator[] (size_t index)
		{
			return buffer[index];
		}
	};

	static inline bool operator== (const Vector2& v1, const Vector2& v2)
	{
		return v1.x == v2.x && v1.y == v2.y;
	}

	static inline Vector2 operator- (const Vector2& v)
	{
		return Vector2(-v.x, -v.y);
	}

	static inline Vector2 operator+ (const Vector2& v1, const Vector2& v2)
	{
		return Vector2(v1.x + v2.x, v1.y + v2.y);
	}

	static inline Vector2 operator- (const Vector2& v1, const Vector2& v2)
	{
		return Vector2(v1.x - v2.x, v1.y - v2.y);
	}

	static inline Vector2 operator* (float s, const Vector2& v)
	{
		return Vector2(s * v.x, s * v.y);
	}

	static inline Vector2 operator* (const Vector2& v, float s)
	{
		return Vector2(v.x * s, v.y * s);
	}

	static inline Vector2 operator* (const Vector2& v1, const Vector2& v2)
	{
		return Vector2(v1.x * v2.x, v1.y * v2.y);
	}

	static inline Vector2 operator/ (float s, const Vector2& v)
	{
		return Vector2(s / v.x, s / v.y);
	}

	static inline Vector2 operator/ (const Vector2& v, float s)
	{
		return Vector2(v.x / s, v.y / s);
	}

	static inline Vector2 operator/ (const Vector2& v1, const Vector2& v2)
	{
		return Vector2(v1.x / v2.x, v1.y / v2.y);
	}

	static inline Vector2 floor(const Vector2& v)
	{
		return Vector2(std::floor(v.x), std::floor(v.y));
	}

	static inline Vector2 ceil(const Vector2& v)
	{
		return Vector2(std::ceil(v.x), std::ceil(v.y));
	}

	static inline Vector2 min(const Vector2& v1, const Vector2& v2)
	{
		return Vector2(std::min(v1.x, v2.x), std::min(v1.y, v2.y));
	}

	static inline Vector2 max(const Vector2& v1, const Vector2& v2)
	{
		return Vector2(std::max(v1.x, v2.x), std::max(v1.y, v2.y));
	}

	static inline Vector2 clamp(const Vector2& v, const Vector2& lower, const Vector2& upper)
	{
		return Vector2(clamp(v.x, lower.x, upper.x), clamp(v.y, lower.y, upper.y));
	}

	static inline float dot(const Vector2& v1, const Vector2& v2)
	{
		return v1.x * v2.x + v1.y * v2.y;
	}

	static inline float length(const Vector2& v)
	{
		return std::sqrt(dot(v, v));
	}

	static inline float angle(const Vector2& v)
	{
		return std::atan2(v.y, v.x);
	}

	static inline Vector2 unit(const Vector2& v)
	{
		return v / length(v);
	}
}

#endif