/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:20 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/15 14:08:02 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// This syntax is called an initialisation list. It is the preferred way to
// initialise member variables, as it is more efficient than initialising them
// in the constructor body. It is also the only way to initialise both
// const and reference member variables. The syntax is as follows:
// ClassName::ClassName(Type1 arg1, Type2 arg2) : member1_(arg1), member2_(arg2)
HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {
};

void	HumanB::set_weapon(Weapon &weapon) {
	this->weapon_ = &weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name_ << " attacks with their ";
	if (this->weapon_)
		std::cout << this->weapon_->getType();
	else
		std::cout << "oversized hand";
	std::cout << "." << std::endl;
}
