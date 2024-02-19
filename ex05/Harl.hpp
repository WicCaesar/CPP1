/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:50:01 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/14 05:22:30 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public:
		void	complain(std::string level);
};

// To make pointers to member functions, use the following syntax:
// type (Class::*pointerToFunction[n])(type) = &Class::function;
// type (Class::*pointer[2])(type) = {&Class::function1, &Class::function2};

// Pointer to a member function of Harl
// that takes a string as a parameter and returns void:
// void (Harl::*pointerToFunction)(std::string) = &Harl::complain;

// To call the first member function: (this->*pointer[0])("level");

#endif
