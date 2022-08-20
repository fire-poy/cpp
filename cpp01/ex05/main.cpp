/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:46:13 by mpons             #+#    #+#             */
/*   Updated: 2022/08/19 14:56:27 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    Harl h;

    h.complain("debug ");
    h.complain("debug");
    h.complain("info");
    h.complain("warning");
    h.complain("error");
    h.complain("bla bla");
    return (0);
}
