/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:37:58 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 07:28:40 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "Você aguarda o ônibus no ponto. Já passa da meia-noite. \n\
Enquanto olha na direção de onde vêm os carros, não percebe uma névoa que se \
desenrola às suas costas.\nEstá calor, como sempre, mas um calafrio repentino \
perpassa sua espinha.\nNum terreno baldio bem perto dali, a terra é revirada…\n"
			  << std::endl;
	Zombie	stack("George");
	Zombie	*heap = newZombie("José");
	std::cout << std::endl;

	std::cout << "Nada do ônibus passar… Poucos carros circulam a essa hora.\n\
Você decide pedir um Uber, mas enquanto digita com a cabeça baixa, um dos seus \
fones cai da orelha.\nGrunhidos roucos chegam aos seus ouvidos.\n" << std::endl;
	stack.announce(); // dot operator
	heap->announce(); // arrow operator
	std::cout << std::endl;

	std::cout << "Você se vira e vê duas figuras andando em sua direção.\n\
Começa a se preocupar por estar só uma hora dessas, mas crê que são apenas \
dois bêbados, já que vêm cambaleantes.\nPercebendo a névoa incomum, você se \
inquieta. \nAlgo parece chamar a atenção de um deles, desvirtuando o rumo da \
sua marcha lenta.\nDo nada, ele começa a correr na direção de algo que você é \
incapaz de ver.\nNão tarda e gritos horríveis ecoam, mas a névoa os abafa como \
se não passassem de uma ilusão sonora.\nMelhor sair logo daqui.\n" << std::endl;
	randomChump("Phani");
	std::cout << std::endl;

	std::cout << "Esses segundos parecem uma eternidade.\nÉ melhor ir na \
direção da sua casa, passando pelos esquisitos?\nOu se afastar deles, mas \
ficar mais longe do seu destino? \nSuas pernas parecem congelar diante das \
duas possibilidades, mas você precisa agir.\nVamos para casa.\nO bêbado que \
havia se afastado já está voltando para perto do amigo.\nSem enxergar bem na \
névoa, parece que ele está acompanhado. \nCada passo faz seu coração acelerar \
mais. \nDiscretamente, você abre sua mochila e apanha a faca da sua marmita. \n\
A névoa atrapalha a visão, mas você sabe que eles já te viram. \nEstão vindo ra\
pidamente em sua direção! \nA adrenalina descongelou suas pernas.\nVocê corre, \
eles vêm atrás.\nConforme se aproximam, um cheiro horrível alcança seu nariz.\n\
Será possível? São… zumbis?\nVocê não acredita no que vê. As bocas retorcidas, \
as vozes ásperas pedindo por miolos.\nTodo o corpo treme, mas sua faca precisa \
estar firme.\nOs filmes já te mostraram o que fazer.\nVocê precisa fazer AGORA.\
\nSem fechar os olhos, você respira fundo.\nAssim que se aproximam, você grita \
e crava sua faca na cabeça de um.\nRindo de nervoso, se prepara para atacar de \
novo.\nMas a faca está fincada no crânio e não sai facilmente.\nRecuando enquan\
to vasculha novamente sua mochila, pensamentos cruéis e asquerosos surgem como \
relâmpagos agonizantes na sua cabeça.\nDe útil, só te restou o garfo.\nÉ o fim.\
\nO outro maldito já está praticamente em cima de você, e salta na sua jugular!\
\nEm profundo desespero, gritando, sacudindo todo o corpo, você milagrosamente \
consegue fincar o garfo através dos olhos daquele homem ensandecido.\nSerá que \
atingiu o cérebro? Parece que sim. \nVocê levanta, ofegante.\nAinda há outro.\n"
			  << std::endl;
	delete heap;
	std::cout << std::endl;

	std::cout << "Um clarão e um ruído invadem a noite. O bendito ônibus!\n\
Você agita os braços desesperadamente, mas ele não para. O maldito ônibus!\n\
Você até tenta correr atrás dele, mas parece desgovernado.  \nComo se já não \
houvesse caos o bastante, o veículo passa por cima da outra criatura que te pe\
rseguia e bate num muro.\nUm breve alívio, pelo menos agora você não está só.\n\
Suor, saliva, lágrimas. Seu pensamento clareia, mas seu cérebro dói.\nVocê não \
vai ser mais uma vítima desse pavor. O motorista está chamando…\n" << std::endl;
}
