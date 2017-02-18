#pragma once

#include <ostream>

namespace Ncurses {


class Window_I
{
public:
	Window_I() {}
	virtual ~Window_I() {}

	virtual std::ostream& getStream() = 0;
};


} //namespace
