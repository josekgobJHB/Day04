/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:38:58 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 12:22:16 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
				if (nb == 0)
                {
                                return (1);
                }
				if(nb >= 1)
				{
								return (nb * ft_recursive_factorial(nb - 1));
				}
				else
				{
								return (0);
				}
}
