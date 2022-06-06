/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:52:51 by mpons             #+#    #+#             */
/*   Updated: 2022/06/03 16:35:07 by mpons            ###   ########.fr       */
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
		// std::cin >> cmd;
		if (cmd == "ADD")
		{
			phonebook.add_contact();
		}
// Once all the fields have been completed,
//   add the contact to the phonebook.
// - A saved contact can’t have empty fields.
		else if (cmd == "SEARCH")
			phonebook.print_list();
		// -   Display the saved contacts as a list of 4 columns: 
		// index, first name, last name and nickname.
		// -   Each column must be 10 characters wide. A pipe character (’|’)
		//  separates them. The text must be right-aligned. If the text is 
		//  longer than the column, it must be truncated and the last 
		//  displayable character must be replaced by a dot (’.’).
    
		// -   Then, prompt the user again for the index of the entry to display.
		//  If the index is out of range or wrong, define a relevant behavior.
		//  Otherwise, display the contact information, one field per line.
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
/*
	char	buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered [" << buff << "]" << std::endl;
*/
