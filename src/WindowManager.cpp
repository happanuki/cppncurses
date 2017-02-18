#include "cppncurses/WindowManager.h"

namespace Ncurses {


static std::unique_ptr<WindowManager> s_holder = nullptr;

WindowManager& WindowManager::getInstance()
{
	if ( s_holder == nullptr ) {
		s_holder.reset( new WindowManager);
		s_holder->_init();
	}
	return *s_holder;
}


void WindowManager::_init()
{
	initscr();
}

WindowManager::~WindowManager()
{
	endwin();
}

Window WindowManager::getWindow(WindowGeometry_T p)
{
	auto w = Window( p);
	w._init();
	return w;
}

} //namespace
