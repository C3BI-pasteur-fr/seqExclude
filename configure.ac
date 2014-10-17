#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(seqExclude, 0.1, edeveaud@pasteur.fr)
AC_CONFIG_SRCDIR([src/seqExclude.c])
AC_CONFIG_HEADER([config.h])

AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CC
AC_CHECK_PROG(POD2MAN, pod2man, pod2man, :)

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h string.h squizz/sequence.h])
AC_CHECK_LIB([bioseq], [fasta_parse])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_C_CONST

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([strerror])

AC_CONFIG_FILES([Makefile src/Makefile tests/Makefile doc/Makefile]) 
AC_OUTPUT
