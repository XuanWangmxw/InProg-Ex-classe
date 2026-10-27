#include <assert.h>
#include <stdio.h>
#include "intervals3.h"

int main(void) {
	
	/*
	double inici, final;
	int n;

	n = intersequen_intervals3 (1.0,8.0,3.0,7.0,4.0,6.0, &inici, &final);

	assert(inici == 4.0);
	assert(final == 6.0);
	assert(n==3.0);

	printf("Interseccio: [%g, %g]\n", inici, final);
	printf("Nombres enters: %d ", n);
	*/

	double a,b,c,d,e,f;
	double inici, final;
	int n;

	printf("Introdueix el primer interval: ");
	scanf("%lf %lf", &a, &b);

	printf("Introdueix el segon interval: ");
	scanf("%lf %lf", &c, &d);

	printf("Introdueix el tercer interval: ");
	scanf("%lf %lf", &e, &f);

	n = intersequen_intervals3( a,b,c,d,e,f, &inici, &final);

	if (inici > final) {
		printf("Els intervals no tenen interseccio!\n");
	} else {
		printf("Interseccio: [%g, %g]\n", inici, final);
		printf("Nombres enters: %d\n", n);

		printf("Els nombres son: ");

		int primer = (int) inici;

		if (primer < inici) primer++;

		int ultim = (int) final;
		

		for (int i = primer; i <= ultim; i++){
			printf("%d ", i);
		}
		
		printf("\n");
	}



	return 0;
}
