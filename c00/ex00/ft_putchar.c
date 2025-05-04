/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine.elgoumri <elgoumriyassine6@studen  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:58:13 by yassine.elgou     #+#    #+#             */
/*   Updated: 2025/05/04 13:57:15 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include<unistd.h>

void ft_putchar(char c){
	        write(1,&c,1);
}

/* int main () {
	        ft_putchar('2');
		        return 0 ;
} */
