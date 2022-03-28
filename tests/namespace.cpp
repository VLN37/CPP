// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include <stdio.h>

int gl_var = 1;
int f(void) { return (2); }

namespace foo {
int gl_var = 3;
int f(void) { return (4); }
}

namespace bar {
int gl_var = 5;
int f(void) { return (6); }
}

namespace fur = bar;

int	main(void)
{
	printf("gl_var     : %3d, f()     : %3d\n", gl_var, f());
	printf("foo::gl_var: %3d, foo::f(): %3d\n", foo::gl_var, foo::f());
	printf("bar::gl_var: %3d, bar::f(): %3d\n", bar::gl_var, bar::f());
	printf("fur::gl_var: %3d, fur::f(): %3d\n", fur::gl_var, fur::f());
	//same as normal namespace
	printf("::gl_var   : %3d, ::f()   : %3d\n", ::gl_var, ::f());

	return (0);
}
