/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:26:46 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/13 07:31:48 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Argumentos inválidos.\n./replace <nome do arquivo> \
<expressão a localizar> <expressão a substituir>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty()) {
		std::cerr << "Campos vazios não são permitidos." << std::endl;
		return (1);
	}

	// The constructor for ifstream takes a const char*, not a string pre-C++11.
	std::ifstream original(filename.c_str());
	if (!original.is_open()) {
		std::cerr << "Arquivo não encontrado/não pode ser aberto." << std::endl;
		return (1);
	}
	if (original.peek() == std::ifstream::traits_type::eof()) {
		std::cerr << "Arquivo vazio." << std::endl;
		return (1);
	}
	// .peek() returns the next character in the stream without extracting it.
	// If the stream is empty, it returns traits_type::eof().
	std::string filename2 = filename + ".replace";
	std::ofstream replaced(filename2.c_str());
	std::string	line;

	// Searches for s1 in each line and replaces it with s2 in the output file.
	while (std::getline(original, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length(); // Moves on to avoid infinite loops.
		}
		replaced << line << std::endl;
	}
	original.close();
	replaced.close();
	return (0);
};
