/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:28:36 by mpons             #+#    #+#             */
/*   Updated: 2022/06/13 15:17:08 by mpons            ###   ########.fr       */
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

// print str sur 10 caractères, Blank padded, truncated si nécessaire avec un '.'
void	PhoneBook::_printInFormat(std::string str) const
{
	int len = 0;
	// int add = 0;
	std::string	tmp;

	tmp = str;
	len = tmp.length();
	if (len < 10)
		std::cout << std::setw(10);
	else if (len > 10)
	{
		tmp.erase(9, len);
		tmp += ".";
	}
	std::cout << tmp;
}

// Display the saved contacts as a list of 4 columns: 
int	PhoneBook::print_list(void) const
{
	int i = -1;
	
	if (this->_q_contact_setted == 0)
	{
		std::cout << "Phonebook empty, add contact" << std::endl;
		return (1);
	}
	std::cout << "     Index" << '|';
	std::cout << "First Name" << '|';
	std::cout << " Last Name" << '|';
	std::cout << "  Nickname" << std::endl;
	while (++i < this->_q_contact_setted)
	{
		std::cout << std::setw(10);
		std::cout << i + 1;	
		std::cout << "|";
		this->_printInFormat(this->contact[i].getFirstName());
		std::cout << "|";
		this->_printInFormat(this->contact[i].getLastName());
		std::cout << "|";
		this->_printInFormat(this->contact[i].getNickName());
		std::cout << std::endl;
	}
	return (0);
}

void	PhoneBook::print_contact(int i) const
{
	// std::cout << "Contact [" << i + 1 << "]" << std::endl;	
	std::cout << std::endl;
	std::cout << this->contact[i].getFirstName() << std::endl;
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << this->contact[i].getNickName() << std::endl;
	std::cout << this->contact[i].getPhoneNumber() << std::endl;
	std::cout << this->contact[i].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::select_contact(void) const
{
	int			i;
	std::string buf;

	std::cout << "Select contact index: ";
	std::getline(std::cin, buf);
	while (buf is ascii)
	{
		std::cout << "Please put a numeric value" << std::endl;
		std::getline(std::cin, buf);
	}
	i = atoi(buf.c_str()) - 1;
	while (i < 1 || i > this->_q_contact_setted)
	{
		std::cout << "Wrong number of contact, select one of precedent list";
		std::getline(std::cin, buf);
	}
	this->print_contact(i);
}
