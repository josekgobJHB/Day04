/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:42:44 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 11:17:59 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
				int factorial;
				
				factorial = 0;
				if(nb == 0 || nb == 1)
				{
				factorial = 1;
				}
				else if(nb > 1)
				{
									factorial = 1;
									while(nb)
									{
													factorial = factorial*nb;
													nb--;
									}
				}
				return (factorial);
}
