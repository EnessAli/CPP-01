/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:30:30 by egermen           #+#    #+#             */
/*   Updated: 2024/10/17 13:30:30 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
     Zombie *data = new Zombie[N];
     for (int i = 0; i < N; i++)
     {
        new (&data[i]) Zombie(name);
     }
     return data;
}
