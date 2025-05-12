#include <unistd.h>


void ft_putcombn(int n ){
	char comb[n]; 
	int i = 0 ;
	if ( i <= n ){
		write(1,comb,n);	
	} else if ( i < n  ){
		comb[i] = i;
		i ++;
		ft_putcombn(n-1);
	}
}

int main(){
	ft_putcombn(5);
	return 0;
}
