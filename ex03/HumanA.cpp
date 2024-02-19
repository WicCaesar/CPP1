/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:28 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/15 14:08:08 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// This syntax is called an initialisation list. It is the preferred way to
// initialise member variables, as it is more efficient than initialising them
// in the constructor body. It is also the only way to initialise both
// const and reference member variables. The syntax is as follows:
// ClassName::ClassName(Type1 arg1, Type2 arg2) : member1_(arg1), member2_(arg2)
HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon) {
};

void	HumanA::attack(void) {
	std::cout << this->name_ << " attacks with their " 
			  << this->weapon_.getType() << "." << std::endl;
}
