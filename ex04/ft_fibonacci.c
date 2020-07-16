/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:56:38 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 12:59:09 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
                if(index < 0)
                {
                                return  (-1);
                }
                else if(index <= 1)
                {
                                return index;
                }
                else
                {
                                return  (ft_fibonacci(index-1) + ft_fibonacci(index-2));  
                }          
}
