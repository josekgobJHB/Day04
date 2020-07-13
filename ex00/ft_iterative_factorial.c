/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:42:44 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/13 17:32:38 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
				int factorial;
				
				factorial = 0;
				if(nb > 0)
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

