#include <Logger.h>

#include "cppncurses/CurseStreambuf.h"


namespace Ncurses {


CurseStreambuf::CurseStreambuf(Window_T window) :
		m_window(window)
{
}


CurseStreambuf::~CurseStreambuf()
{
}


_streambuf_base_t::int_type CurseStreambuf::overflow( int_type c )
{
	if ( c != traits_type::eof() ) {
		(void) waddch (m_window.get(), c); // ncurses API
		wrefresh(m_window.get());
	}

	return c;
}



} //namespace
