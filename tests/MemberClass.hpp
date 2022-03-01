/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemberClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:02:26 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/01 15:25:08 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMBERCLASS_H
# define MEMBERCLASS_H

class Member {

	int	foo = 42;

	public:
		Member(void);
		~Member(void);

		void	bar(void);
};

#endif
