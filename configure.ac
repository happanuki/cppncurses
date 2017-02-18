AC_INIT(cppncurses, 0.0.1, voidstaryou@gmail.com)

PACKAGE_DESC=" ncurses c++ library (windows, widgets, etc)"
AC_SUBST([PACKAGE_DESC])

AC_PROG_CXX()
build_cxx=$CXX

if test "x$host_alias" = "x$build_alias"; then
	test_cxx=$CXX
else
	test_cxx=`which g++`
fi

# Dependencies
PKG_CHECK_MODULES([CPPGENERICS], [cppgenerics >= 0.0.1])
# /Dependencies 

AC_ARG_ENABLE([debug], AS_HELP_STRING([--enable-debug], [debug build]))

if test "x$enable_debug" = "xyes"; then
	debug=1
else
	debug=0
fi

build_shell=$SHELL
	
AC_SUBST(test_cxx)
AC_SUBST(build_cxx)
AC_SUBST(build_shell)
AC_SUBST(debug)

AC_CONFIG_FILES([Makefile cppncurses.pc])

AC_OUTPUT
