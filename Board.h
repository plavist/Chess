#pragma once
#include "Cell.h"
namespace Core {
	class Board
	{
	private:
		Cell** cells;
	public:
		Cell** GetCells();
	};
}


