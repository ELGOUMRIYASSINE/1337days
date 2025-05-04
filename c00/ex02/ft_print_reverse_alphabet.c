/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:11:02 by yassine           #+#    #+#             */
/*   Updated: 2025/05/04 14:13:11 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

 void  ft_print_reverse_alphabet(void) {
 
         char alph = 'z';
         while( alph >= 'a' ){
             write(1,&alph,1);
             alph--;
       }
 
 }
