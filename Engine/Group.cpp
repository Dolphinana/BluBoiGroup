#include "Group.h"

void Group::Update(Player & player, Graphics & gfx)
{
	vx = (player.x - x) / 2;
	vy = (player.y - y) / 2;
}

void Group::Draw(Graphics & gfx)
{
	gfx.DrawRectDim(x, y, width, height, Colors::Blue);
}
