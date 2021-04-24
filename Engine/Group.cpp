#include "Group.h"

void Group::Init(int in_i)
{
	i = in_i;
}

void Group::Update(Player & player, Graphics & gfx)
{
	vx = (player.x - x) / i;
	vy = (player.y - y) / i;

	x += vx;
	y += vy;
}

void Group::Draw(Graphics & gfx)
{
	gfx.DrawRectDim(x, y, width, height, Colors::Blue);
}
