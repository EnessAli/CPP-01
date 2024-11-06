/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:32:34 by egermen           #+#    #+#             */
/*   Updated: 2024/10/17 13:32:34 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if(ac == 2)
    {
        std::string info = av[1];
        harl.complain(info);
    }
    else
        std::cout << "Sorry - Only Two Arguments ! Executable Argument : DEBUG, INFO, WARNING, ERROR" << std::endl;
    return 0;
}
