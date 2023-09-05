#include <string>
#include <ostream>
#include <istream>
#include "vec.h"

namespace xcon
{
	template<typename T>
	class vec<2, T>
	{
	public:
		T x, y;

		vec() {};

		vec(T x, T y) : x(x), y(y) {};

		void sort()
		{
			if (x > y)
			{
				std::swap(x, y);
			}
		}

		friend std::ostream& operator<<(std::ostream& stream, const vec<2, T>& vector)
		{
			stream << vector.x << ", " << vector.y;
			return stream;
		}
		friend std::istream& operator>>(std::istream& stream, vec<2, T>& vector)
		{
			stream >> vector.x >> vector.y;
			return stream;
		}
	};

	using vec2  = vec<2, float>;
	using ivec2 = vec<2, int>;
	using dvec2 = vec<2, double>;
	using cvec2 = vec<2, char>;
	using svec2 = vec<2, std::string>;

	template<typename T> using vec2_t = vec<2, T>;
}