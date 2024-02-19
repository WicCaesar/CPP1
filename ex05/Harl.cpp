/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:56:27 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/14 09:17:43 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

void	Harl::complain(std::string level) {
	void (Harl::*pointerToFunction[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	parameter[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == parameter[i])
			(this->*pointerToFunction[i])();
	}
}
