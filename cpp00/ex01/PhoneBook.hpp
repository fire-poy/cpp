/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:30:07 by mpons             #+#    #+#             */
/*   Updated: 2022/06/06 14:38:18 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	int 	add_contact(void);
	void	print_list(void);
	void	print_contact(int i);
	// std::string		getFirstName(std::string s);
	// std::string		getLastName(std::string s);
	// std::string		gsetNickName(std::string s);
	// std::string		getPhoneNumber(std::string s);
	// std::string		getDarkestSecret(std::string s);

private:
	// int	fun(void);
	Contact contact[8];
	// INITIALIZE CONTACT
	// int	PhoneBook::get_empty_contact(void);
	std::string get_info(char const *s);
	int _oldest_Contact;
	int _q_contact_setted;
	
// 	◦ It has an array of contacts.
// ◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one by the new one.
// ◦ Please note that dynamic allocation is forbidden.
};

#endif
