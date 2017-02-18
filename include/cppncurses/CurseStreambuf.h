#pragma once

#include <streambuf>

#include "cppncurses/Types.h"

namespace Ncurses {

using _streambuf_base_t = std::basic_streambuf<char,std::char_traits<char>> ;

class CurseStreambuf : public _streambuf_base_t
{
	Window_T m_window;

protected:
	int_type overflow( int_type c  = traits_type::eof() ) override;

public:
	CurseStreambuf(Window_T window);
	~CurseStreambuf();

};


} //namespace
