/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:09:01 by yassine           #+#    #+#             */
/*   Updated: 2025/05/04 16:27:10 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb2(void) {
	int i = 0 ;
       while( i <= 98 ){
	       int j = i + 1 ;
	       while( j <= 99  ){
		       char i1 = i / 10 + '0' ;
		       char i2 = i % 10 + '0' ;
		       char j1 = j / 10 + '0' ;
		       char j2 = j % 10 + '0' ;
		       char comb[5] = {i1,i2,' ',j1,j2};
		       write(1,comb,5);
		       if( i != 98  ){
			       write(1," ,",2);
		       }
		j++;
	       }
	i++;
       }	

}

/* int main(){
	ft_print_comb2();
	return 0;

} */
