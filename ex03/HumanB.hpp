/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:25 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/12 06:14:25 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

// HumanB doesn't take weapons in its constructor. They may not always have one.
class	HumanB {
	private:
		std::string	name_;
		Weapon		*weapon_;

	public:
		HumanB(std::string name);

		void	set_weapon(Weapon &weapon);
		void	attack(void);
};

#endif
