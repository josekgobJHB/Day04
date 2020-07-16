/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:38:58 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/16 10:50:56 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


int ft_recursive_factorial(int nb)
{
                int		factorial;

				factorial = 1;
                if(nb == 0 || nb == 1)
                {
                                return (factorial);
                }
				else if(nb > 1)
				{
								while(nb > 1)
								{
												factorial = nb *(nb--);
												nb--;
												if(nb == 1)
												{
																return (factorial);
												}
	   							}
				}
				
				return (0);
}

int main(void)
{
				printf("%d", ft_recursive_factorial(4));
}
