/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:30:07 by mpons             #+#    #+#             */
/*   Updated: 2022/06/15 13:36:11 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include "stdlib.h"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	int 	add_contact(void);
	int		print_list(void) const;
	void	select_contact(void) const; 
	void	print_contact(int i) const; 

private:
	Contact contact[8];
	std::string get_info(char const *s);
	void		_printInFormat(std::string str) const;
	int _oldest_Contact;
	int _q_contact_setted;
};

#endif
