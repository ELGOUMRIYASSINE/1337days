#include <unistd.h>

void ft_putnbr(int nbr) {
	if ( nbr >= 0 && nbr <= 9  ) {
		char n = nbr + '0';
		write(1,&n,1);
		return;
	} else if ( nbr  > 9  ) {
		char comb[11];
		int i = 0 ;
	        int nb = nbr ;	
		while( nb > 9  ){
			comb[i] = nb % 10 + '0' ;
			nb = nb / 10 ;
			i++;
		}
		comb[i++] = nb + '0';
		while( i  >= 0 ){
			write(1,&comb[i],1);
			i--;
		}
			
	}
	else if (  nbr < 0  ) {
		write(1,"-",1);
		ft_putnbr(-nbr);
	}


}

int main(){
	ft_putnbr(0);
	return 0;

} 
