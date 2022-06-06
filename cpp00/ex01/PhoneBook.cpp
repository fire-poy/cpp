/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:28:36 by mpons             #+#    #+#             */
/*   Updated: 2022/06/06 14:41:53 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


//Initialization list ->
// PhoneBook::PhoneBook(int p1, int p2) : a1(p1), a2(p2), a3(p3)
// {
// }

PhoneBook::PhoneBook(void)
{
	_oldest_Contact = 0;
	_q_contact_setted = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string PhoneBook::get_info(char const *s)
{
	std::string tmp;

	std::cout << s;
	std::getline(std::cin, tmp);
	while (tmp.empty())
	{
		std::cout << "Contact can’t have empty fields." << std::endl;
		std::cout << s;
		std::getline(std::cin, tmp);
	}
	return (tmp);
}

// int PhoneBook::get_empty_contact(void)
// {
// 	int	i = 0;

// 	while (i < 8)
// 	{
// 		if (this->contact[i].isEmpty() == true)
// 			return (i);
// 		else
// 			i++;
// 	}
// 	return (0)
// }

int	PhoneBook::add_contact()
{
	int i = _oldest_Contact;
	std::string tmp;

	tmp = PhoneBook::get_info("First Name: ");
	this->contact[i].setFirstName(tmp);
	tmp = PhoneBook::get_info("Last Name: ");
	this->contact[i].setLastName(tmp);
	tmp = PhoneBook::get_info("Nickname: ");
	this->contact[i].setNickName(tmp);
	tmp = PhoneBook::get_info("PhoneNumber: ");
	this->contact[i].setPhoneNumber(tmp);
	tmp = PhoneBook::get_info("Darkest secret: ");
	this->contact[i].setDarkestSecret(tmp);
	_oldest_Contact += 1;
	if (_q_contact_setted < 8)
		_q_contact_setted += 1;
	if (_oldest_Contact == 8)
		_oldest_Contact = 0;
	return (0);
}

// std::setw(10) 
// std::cout.width(10)
// std::string.size();
// std::string.length();
// size	
// length
// Return length of string (public member function )

// -   Display the saved contacts as a list of 4 columns: 
		// index, first name, last name and nickname.
		// -   Each column must be 10 characters wide. A pipe character (’|’)
		//  separates them. The text must be right-aligned. If the text is 
		//  longer than the column, it must be truncated and the last 
		//  displayable character must be replaced by a dot (’.’).

void	PhoneBook::print_list(void)
{
	int i = -1;
	std::string tmp;

	std::cout << "Index     " << '|';
	std::cout << "First Name" << '|';
	std::cout << "Last Name " << '|';
	std::cout << "Nickname  " << '|';
	
		//itoa
		// tmp.size()
	while (++i < this->_q_contact_setted)
	{
		std::cout << "Contact [" << i << "\"" << std::endl;	
		std::cout << this->contact[i].getFirstName() << std::endl;
		std::cout << this->contact[i].getFirstName() << std::endl;
		std::cout << this->contact[i].getLastName() << std::endl;
		std::cout << this->contact[i].getNickName() << std::endl;
		std::cout << this->contact[i].getPhoneNumber() << std::endl;
		std::cout << this->contact[i].getDarkestSecret() << std::endl << std::endl;
	}
}

void	PhoneBook::print_contact(int i)
{
	//itoa
	std::cout << "Contact [" << i << "\"" << std::endl;	
	std::cout << this->contact[i].getFirstName() << std::endl;
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << this->contact[i].getNickName() << std::endl;
	std::cout << this->contact[i].getPhoneNumber() << std::endl;
	std::cout << this->contact[i].getDarkestSecret() << std::endl << std::endl;
}




    
		// -   Then, prompt the user again for the index of the entry to display.
		//  If the index is out of range or wrong, define a relevant behavior.
		//  Otherwise, display the contact information, one field per line.


// int PhoneBook::_oldest_Contact = 0;
// int PhoneBook::_q_contact_setted = 0;
