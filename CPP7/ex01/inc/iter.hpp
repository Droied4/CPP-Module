/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:45:50 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 22:23:15 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T *address, unsigned int lenght, void(*f)(T &var));
template <typename T> void print(T  &a);

#endif //ITER_HPP
