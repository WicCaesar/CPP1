/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:29:29 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 20:52:37 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	string = "HI THIS IS BRAIN";
	// A pointer stores the memory address as its value.
	std::string	*stringPTR = &string;
	// A reference is an alias to an existing variable.
	std::string	&stringREF = string;

	// To print the memory address of a variable, use the & operator.
	std::cout << "Endereço da string: " << &string << std::endl
			  << "Endereço do ponteiro: " << stringPTR << std::endl
			  << "Endereço da referência: " << &stringREF << std::endl;
	std::cout << "Conteúdo da string: " << string << std::endl
			  << "Conteúdo do ponteiro: " << *stringPTR << std::endl
			  << "Conteúdo da referência: " << stringREF << std::endl;
}
