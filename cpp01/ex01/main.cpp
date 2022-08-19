/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:02:35 by mpons             #+#    #+#             */
/*   Updated: 2022/08/16 11:40:18 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "stdlib.h"

int main(void)
{
	Zombie *firstZombie = NULL;
	std::string buf;

	std::cout << "Put number of zombies: ";
	std::getline(std::cin, buf);
	firstZombie = zombieHorde(atoi(buf.c_str()), "jean pierre zombie");
	delete [] firstZombie;
	return (0);
}
