/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:32:16 by egermen           #+#    #+#             */
/*   Updated: 2024/10/17 13:32:16 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    (void) *av;
    
    if(ac == 1)
    {
        Harl harl;
    
        harl.complain("DEBUG");
    }
    else
        std::cout << "Just Enter The Program Name " << std::endl;

    return 0;
}
