#pragma once
#include "Figure.h"
namespace Core{
	class Cell
	{
	private:
		Figure* figure;
		char color;
		int x, y;
	public:
		Figure* GetFigure();
		int GetX();
		int GetY();
	};
}


