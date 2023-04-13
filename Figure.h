#pragma once
namespace Core {
	class Figure
	{
	private:
		int type;
		char team;

	public:
		int GetType();
		char GetTeam();
		void Move();
	};
}


