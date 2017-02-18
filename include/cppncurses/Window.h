#pragma once

#include <exception>

#include "cppncurses/interfaces/Window_I.h"
#include "cppncurses/Types.h"


namespace Ncurses {

class WindowManager;


class Window : public Window_I
{
	friend class WindowManager;

	Window_T m_window = nullptr;
	WindowGeometry_T m_geometry = { 0 };

	std::unique_ptr<std::ostream> m_stream = nullptr;
	std::unique_ptr<std::streambuf> m_streamBuf = nullptr;

protected:
	Window( WindowGeometry_T g);

	Window_T getCurseWindow() const { return m_window; }
	void _init() throw (std::exception&);

public:
	~Window();

	//STL-friendly
	Window() = default;
	Window(const Window&) = default;
	Window(Window&&) = default;
	Window& operator=(const Window&) = default;


	std::ostream& getStream() override { return *m_stream; }

};

} //namespace
