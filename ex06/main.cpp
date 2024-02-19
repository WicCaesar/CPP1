/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:49:42 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/14 09:07:33 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Selecione o nível mínimo de visibilidade:\n\
./dalek debug/info/warning/error" << std::endl;
		return (1);
	}
	
	Harl	dalek;

	dalek.complain(argv[1]);
	return (0);
}