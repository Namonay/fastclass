/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asdf.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:49:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 21:49:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asdf.hpp"

asdf::asdf(void)
{

}

asdf::~asdf(void)
{

}

asdf::asdf(asdf &copy)
{
	*this = copy;
}

asdf& asdf::operator=(const asdf& x)
{
	return (*this);
}
