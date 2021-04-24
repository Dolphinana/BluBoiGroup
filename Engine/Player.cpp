#include "Player.h"

void Player::Update(MainWindow & wnd, Graphics& gfx)
{
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		vx -= 1;
	}
	else if (vx < 0) { vx += 1; }
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		vx += 1;
	}
	else if (vx > 0) { vx -= 1; }
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		vy -= 1;
	}
	else if (vy < 0) { vy += 1; }
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		vy += 1;
	}
	else if (vy > 0) { vy -= 1; }

	x += vx;
	y += vy;

	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	if (x + width >= gfx.ScreenWidth)
	{
		x = gfx.ScreenWidth - width - 1;
		vx = -vx;
	}

	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	if (y + height >= gfx.ScreenHeight)
	{
		y = gfx.ScreenHeight - height - 1;
		vy = -vy;
	}
}

void Player::Draw(Graphics & gfx)
{
	gfx.DrawRectDim(x, y, width, height, Colors::White);
}
