/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:52:36 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 12:53:14 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
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
                else if(power > 1)
                {
                                power--;
                                ft_recursive_power(nb*nb, power);
                }
                
}
