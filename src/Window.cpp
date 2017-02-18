#include <Exception.h>

#include "cppncurses/Window.h"
#include "cppncurses/CurseStreambuf.h"

namespace Ncurses {

Window::Window (WindowGeometry_T p) :
	m_geometry(p)
{
}

Window::~Window()
{
}

void Window::_init() throw (std::exception&)
{
	m_window.reset( newwin(m_geometry.x, m_geometry.y, m_geometry.width, m_geometry.height),
	[](WINDOW* in) {
		delwin(in);
	}
	);

	m_streamBuf.reset( new CurseStreambuf( m_window));

	m_stream.reset( new std::ostream( m_streamBuf.get() )) ;

}


} //namespace
