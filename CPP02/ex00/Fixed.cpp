/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:09:12 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/20 13:30:38 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawsBits member function called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits(const int raw)
{
	fixed_point = raw;
	return ;
}

Fixed &Fixed::operator= (Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->fixed_point = fix.getRawBits();
	return *this;
}
