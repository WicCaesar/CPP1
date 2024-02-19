/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:37:52 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 06:33:28 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_zombie(std::string name) {
	this->name_ = name;
	std::cout << this->name_ << " ergue-se do chão. 🧟" << std::endl;
}
// Zombie::Zombie(std::string name) : name(name) {
// This is the correct way to initialize a member variable in the constructor,
// because the member variable is private and cannot be accessed directly.
// The syntax is: ClassName::ClassName(std::string name) : member_variable(name) {}

Zombie::~Zombie(void) {
	std::cout << "Aqui jaz " << this->name_<< ". ✝ 2024" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
