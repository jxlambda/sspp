AC_PREREQ([2.69])

AC_INIT([Super Saiyan Potato Project], [0.1.0])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([Makefile.am])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIRS([m4])

AC_MSG_NOTICE([Configuring $PACKAGE_NAME $PACKAGE_VERSION])

AC_PROG_CPP
AC_PROG_CXX
AC_PROG_CC([clang gcc c99 cc])
AC_PROG_MAKE_SET

AC_CHECK_HEADER_STDBOOL

AC_CHECK_HEADERS([inttypes.h stddef.h stdio.h stdlib.h unistd.h])

AC_TYPE_SIZE_T
AC_TYPE_UINT32_T

AC_CONFIG_FILES([
	Makefile
	include/Makefile
	src/Makefile
	src/bin/Makefile
	src/bin/greet/Makefile
	src/bin/potatoflood/Makefile
	src/lib/Makefile
	src/lib/libgreet/Makefile
	src/lib/libpotato/Makefile
])

LT_INIT([])

AM_INIT_AUTOMAKE([subdir-objects tar-pax])

AC_OUTPUT
