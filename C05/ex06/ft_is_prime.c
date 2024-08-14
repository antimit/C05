/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:40:55 by onosul            #+#    #+#             */
/*   Updated: 2024/08/14 21:12:23 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0); 

    if (nb == 2)
        return (1);  

    if (nb % 2 == 0)
        return (0);  

    i = 3;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i += 2;  
    }

    return (1);
}


int main()
{
    int i;
    i = ft_is_prime(10);
    printf("%d",i);

    
}
