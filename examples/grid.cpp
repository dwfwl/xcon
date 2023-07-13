#include "../include/xcon.h"

#include <iostream>
#include <vector>

struct Grid
{
	xcon::vec2 size;

	std::vector<char> grid;

	Grid(xcon::vec2 size)
		: size(size)
	{
		createGrid();
	};

	void render
	{
		for (auto& a : grid)
		{
			std::cout << a;
		}
	};
private:
	void createGrid()
	{
		for (int yl = 0; yl < size.y; yl++)
		{
			for (int xl = 0; xl < size.x; xl++)
			{
				grid.push_back('@');
				grid.push_back(' ');
			}

			grid.push_back('\n');
		}
	};
};

int main(void)
{
	Grid grid(xcon::vec2(10, 5));
	grid.render();
}