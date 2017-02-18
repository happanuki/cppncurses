#include "cppncurses/WindowManager.h"
#include <iostream>


int main()
{
	using namespace Ncurses;
	auto& wm = WindowManager::getInstance();

	WindowGeometry_T g = { 5,5,10,10 };

	auto w = wm.getWindow(g);

	w.getStream() << "Hello World!\n";
	w.getStream() << "Hello World 2 !\n";


	g = { 10,10,30,30 };

	auto w2=wm.getWindow(g);

	w2.getStream() << "Hello World3!\n";
	w2.getStream() << "Hello World 4 !\n";

	char c;
	std::cin >> c;
}
