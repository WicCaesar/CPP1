/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:56:27 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/14 09:17:13 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cctype>

void	Harl::debug(void) {
	std::cout << "EXCELENTE!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "EXPLIQUE-SE!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "EXAMINEM!" << std::endl;
}

void	Harl::error(void) {
	std::cout << "EXTERMINAR!" << std::endl;
}

// Calls one member function, depending on what's passed as parameter.
void	Harl::complain(std::string level) {
	std::string	parameter[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int	message = 4;
	for (int upper = 0; level[upper]; upper++)
		level[upper] = toupper(level[upper]);
	for (int i = 0; i < 4; i++) {
		if (level == parameter[i])
			message = i;
	}
	// In C++, if a case is true, all the following cases will be executed.
	// To avoid this, use a break statement. In our project, we DO want to
	// execute all the following cases, so we don't use a break statement.
	// To avoid compilation errors due to the Werror flag, a fallthrough
	// comment is used. On C++17 and later, the [[fallthrough]] attribute
	// can be used instead.
	switch (message) {
		case 0:
			(this->debug)(); // fallthrough
		case 1:
			(this->info)(); // fallthrough
		case 2:
			(this->warning)(); // fallthrough
		case 3:
			(this->error)();
			break ;
		default:
			std::cout << "EXAUSTO!" << std::endl;
	}
}
