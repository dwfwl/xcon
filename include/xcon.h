#pragma once
namespace xcon
{
public:
	template <typename v>
	struct vec2_t
	{
		v x, y;
		vec2_t(v x, v y)
			: x(x), y(y) {};
	};

	struct vec2
	{
		float x, y;
		vec2(float x, float y)
			: x(x), y(y) {};
	};

	template <typename v>
	struct vec3_t
	{
		v x, y, z;
		vec3_t(v x, v y, v z)
			: x(x), y(y), z(z) {};
	};

	struct vec3
	{
		float x, y, z;
		vec3(float x, float y, float z)
			: x(x), y(y), z(z) {};
	};

	template <typename v>
	struct vec4_t
	{
		v r, g, b, a;
		vec4_t(v r, v g, v b, v a)
			: r(r), g(g), b(b), a(a) {};
	};

	struct vec4
	{
		float r, g, b, a;
		vec4(float r, float g, float b, float a)
			: r(r), g(g), b(b), a(a) {};
	};
};
