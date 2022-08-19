/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:06:24 by mpons             #+#    #+#             */
/*   Updated: 2022/08/18 15:26:32 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{

public:
	HumanA(std::string name, Weapon w);
	~HumanA(void);
	void	attack(void) const;

private:
	std::string	const _name;
	Weapon		_w;
};
	
#endif


