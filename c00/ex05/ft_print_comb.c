/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:42:03 by yassine           #+#    #+#             */
/*   Updated: 2025/05/04 16:03:28 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void  ft_print_comb(void){
	    char i = '0' ;
	    while( i <= '7' ){
			char j = i + 1;
			while( j <= '8' ){
				char k = j+1;
				while( k <= '9' ){
					char comb[4] = {i,j,k,','};
					int len = ( i!= '7' ) ? 4 : 3;
					write(1,comb,len);
					k++;
				}
			j++;
			}
		i++;
	    }
	}

int main(){
	ft_print_comb();
	return 0;

}
