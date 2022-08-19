/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:28:51 by mpons             #+#    #+#             */
/*   Updated: 2022/08/18 10:34:10 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	Weapon(std::string type); 
	~Weapon(void);
	std::string &getType(void) const; 	
	void		setType(std::string type); 	

private:
	std::string _type;
	std::string &_typeRef;
};

#endif
