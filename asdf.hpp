/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asdf.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:49:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 21:49:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASDF__
# define __ASDF__

class asdf
{
	public:
		asdf(void);
		~asdf(void);
		asdf(asdf &copy);
		asdf& operator=(const asdf& x);
	private:

};

#endif