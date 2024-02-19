/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:23 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/12 05:54:46 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

// HumanA takes the weapon in its constructor. They will always be armed.
class	HumanA {
	private:
		std::string	name_;
		Weapon		&weapon_;

	public:
		HumanA(std::string name, Weapon &weapon);

		void	attack(void);
};

#endif
