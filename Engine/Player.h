#pragma once
#include "MainWindow.h"
#include "Graphics.h"

class Player
{
public:
	void Update(MainWindow& wnd,Graphics& gfx);
	void Draw(Graphics& gfx);
	int x = 400;
	int y = 300;
	int vx = 0;
	int vy = 0;
	int width = 16;
	int height = 16;
};
