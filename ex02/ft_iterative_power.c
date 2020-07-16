/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:39:33 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 12:39:38 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
                if(power < 0)
                {
                                return (0);
                }
                else if(power == 0)
                {
                                return (1);
                }
                else if(power == 1)
                {
                                return nb;
                }
                else if (power > 1)
                {	
								int result;
								result = 1;
								while(power !=  0)
               	 				{
                            					result = result * nb;
                            					power--;
               	 				}
	   			}
                  return (result);
}

