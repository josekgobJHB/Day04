/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:53:50 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/17 08:54:36 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
                int     digits;
                int     divisers;
                while(nb)
                {
                digits = 9;
                divisers = 0;
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
                                return  (nb);
                }
                else
                {
                                nb++;
                }
                }
}
