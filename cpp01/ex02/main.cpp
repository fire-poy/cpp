/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:02:35 by mpons             #+#    #+#             */
/*   Updated: 2022/08/16 13:45:10 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s      = "HI THIS IS BRAIN";
    std::string *sPtr  = &s;
    std::string &sRef  = s;

    std::cout << "& of the string variable: " << &s << std::endl;
    std::cout << "& held by string PTR:     " << sPtr << std::endl;
    std::cout << "& held by string REF:     " << &sRef << std::endl;
    std::cout << std::endl;
    std::cout << "value of the string variable:  " << s << std::endl;
    std::cout << "value pointed to by string PTR: " << *sPtr << std::endl;
    std::cout << "value pointed to by string REF: " << sRef << std::endl;
	return (0);
}
