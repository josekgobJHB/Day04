/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:48:16 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/17 08:48:30 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
                int     digits;
                int     divisers;
                
                digits = 9;
                divisers = 0;
                if(nb == 0 || nb == 1)
                {
                                return (0);
                }
                while(digits != 1)
                {
                                if(nb%digits == 0)
                                {
                                            divisers++;   
                                }
                                digits--;
                }
                if((nb <10 && divisers == 1) || (nb > 9 && divisers == 0))
                {
                                return  (1);
                }
                else
                {
                                return (0);
                }
}

