#include "Player.h"

void Player::Update(MainWindow & wnd)
{
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		vx -= 1;
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		vx += 1;
	}
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		vy -= 1;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		vy += 1;
	}

	x += vx;
	y += vy;
}

void Player::Draw(Graphics & gfx)
{
	gfx.DrawRectDim(x, y, width, height, Colors::White);
}
