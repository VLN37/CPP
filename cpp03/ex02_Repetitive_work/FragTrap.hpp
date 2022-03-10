/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:45:46 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/10 03:49:54 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &src);

		void		highFiveGuys(void) const;
};

#endif
