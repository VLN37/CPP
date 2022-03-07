/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 23:33:20 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/07 17:21:35 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>


#define DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-" \
				"pickle-specialketchup burger. I really do!"
#define INFO	"I cannot believe adding extra bacon costs more money. " \
				"You didn’t put enough bacon in my burger! If you did," \
				" I wouldn’t be asking for more!"
#define WARNING	"I think I deserve to have some extra bacon for free. " \
				"I’ve been coming for years whereas you started working" \
				" here since last month."
#define ERROR	"This is unacceptable! I want to speak to the manager now."


class Karen {
	typedef void (Karen::*funcptr)(void) const;

	public:
		Karen(void);
		~Karen(void);

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
