#pragma once
#include "Player.h"
#include "Graphics.h"

class Group
{
public:
	void Update(Player& player,Graphics& gfx);
	void Draw(Graphics& gfx);

	int x = 300;
	int y = 300;
	int vx = 0;
	int vy = 0;
	int width = 12;
	int height = 12;
};
