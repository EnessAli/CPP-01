/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:30:16 by egermen           #+#    #+#             */
/*   Updated: 2024/10/17 13:30:16 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *army = zombieHorde(3, "enes");
    for (int i = 0; i < 3; i++)
    {
        army[i].announce();
    }
    delete [] army;
}