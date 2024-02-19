/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:37:49 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 01:40:46 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates a zombie, names it, and makes it announce itself.
// Here, the zombie object is created in the stack, so it is destroyed when the 
// function ends.
void	randomChump(std::string name) {
	Zombie	zombie(name);
	zombie.announce();
}
