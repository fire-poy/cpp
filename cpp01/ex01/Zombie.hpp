/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:57:34 by mpons             #+#    #+#             */
/*   Updated: 2022/08/16 11:25:49 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(void);
	~Zombie(void);
	void	announce(void) const;
	void	set_name(std::string name);
	
private:

	std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
