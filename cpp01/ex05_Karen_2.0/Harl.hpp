// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>


#define DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-" \
				"pickle-specialketchup burger. I really do!"
#define INFO	"I cannot believe adding extra bacon costs more money. " \
				"You didn’t put enough bacon in my burger! If you did," \
				" I wouldn’t be asking for more!"
#define WARNING	"I think I deserve to have some extra bacon for free. " \
				"I’ve been coming for years whereas you started working" \
				" here since last month."
#define ERROR	"This is unacceptable! I want to speak to the manager now."


class Harl {
	typedef void (Harl::* funcptr)(void) const;

public:
	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:
	static std::string	levels[4];
	static funcptr		fptr[4];

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;
};

#endif
