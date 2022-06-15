/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:52:51 by mpons             #+#    #+#             */
/*   Updated: 2022/06/15 13:23:41 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "ADD | SEARCH | EXIT : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			std::cout << std::endl;
			phonebook.add_contact();
			std::cout << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			std::cout << std::endl;
			if (phonebook.print_list() == 0)
				phonebook.select_contact();
		}
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
