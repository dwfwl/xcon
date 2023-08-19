#include <string>
#include "vec.h"

namespace xcon
{
	template<typename T>
	class vec<4, T>
	{
	public:
		T x, y, z, w;

		vec(T x, T y, T z, T w) : x(x), y(y), z(z), w(w) {};

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
						std::swap(x, y);
					}
					if (z > w)
					{
						std::swap(z, w);
						if (y > z)
						{
							std::swap(y, z);
							if (x > y)
							{
								std::swap(x, y);
							}
						}
					}
				}
			} 
			if (y > z)
			{
				std::swap(y, z);
				if (x > y)
				{
					std::swap(x, y);
				}
				if (z > w)
				{
					std::swap(z, w);
					if (y > z)
					{
						std::swap(y, z);
						if (x > y)
						{
							std::swap(x, y);
						}
					}
				}
			}
			if (z > w)
			{
				std::swap(z, w);
				if (y > z)
				{
					std::swap(y, z);
					if (x > y)
					{
						std::swap(x, y);
					}
				}
			}
		}
	};

	using vec4 = vec<4, float>;
	using ivec4 = vec<4, int>;
	using dvec4 = vec<4, double>;
	using cvec4 = vec<4, char>;
	using svec4 = vec<4, std::string>;

	template<typename T> using vec4_t = vec<4, T>;
}