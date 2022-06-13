/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:52:51 by mpons             #+#    #+#             */
/*   Updated: 2022/06/13 15:04:02 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.add_contact();
		}
		else if (cmd == "SEARCH")
		{
			if (phonebook.print_list() == 0)
				phonebook.select_contact();
		}
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
