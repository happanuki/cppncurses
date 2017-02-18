#pragma once

#include "cppncurses/Window.h"

namespace Ncurses {

class WindowManager
{
protected:
	WindowManager() {}
	void _init();

public:

	static WindowManager& getInstance();

	~WindowManager();

	Window getWindow(WindowGeometry_T p);

};

} //namespace
