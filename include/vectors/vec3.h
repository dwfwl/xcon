#include <string>
#include "vec.h"

namespace xcon
{
	template<typename T>
	class vec<3, T>
	{
	public:
		T x, y, z;
		vec(T x, T y, T z) : x(x), y(y), z(z) {};

		void sort()
		{
			if (x > y)
			{
				std::swap(x, y);
				if (y > z)
				{
					std::swap(y, z);
					if (x > y)
					{
						std::swap(y, x);
					}
				}
			} else if (y > z)
			{
				std::swap(y, z);
				if (x > y)
				{
					std::swap(x, y);
				}
			}
		}
	};

	using vec3 = vec<3, float>;
	using ivec3 = vec<3, int>;
	using dvec3 = vec<3, double>;
	using cvec3 = vec<3, char>;
	using svec3 = vec<3, std::string>;

	template<typename T> using vec3_t = vec<3, T>;
}