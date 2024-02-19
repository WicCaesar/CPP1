/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:35 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/15 14:09:11 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) {
	this->type_ = type;
};

std::string	Weapon::getType(void) const {
	return (this->type_);
};

void	Weapon::setType(const std::string &type) {
	this->type_ = type;
}
