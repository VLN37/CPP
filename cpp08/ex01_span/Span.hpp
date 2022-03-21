// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <climits>

#define EXC_LENGTH "Exception: This list is already at maximum capacity\n"
#define EXC_RANGE "Exception: Range start is lesser than end\n"

class Span {
public:
	Span(unsigned int N);
	Span(Span const& src);
	~Span(void);

	static void				out(int n);

	Span const&	operator=(Span const& rhs);
	void		print(void) const;
	void		addNumber(int n);
	void		addRange(int first, int last);
	int			shortestSpan(void) const;
	int			longestSpan(void) const;

private:
	Span(void);

	std::list<int> const&	getList(void) const;
	void					update_span(int prev, int nbr);
	int						getIndex(int) const;

	std::list<int>	_list;
	size_t			_max_size;
	int				_min_span;
	int				_max_span;
};

#endif
