#pragma once

#include <curses.h>

#include <cinttypes>
#include <memory>


namespace Ncurses {


using Window_T = std::shared_ptr<WINDOW> ;


struct WindowGeometry_T
{
	int x;
	int y;
	int width;
	int height;
};




} //namespace
