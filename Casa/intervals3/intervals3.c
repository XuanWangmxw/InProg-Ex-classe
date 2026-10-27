#include "intervals3.h"
#include <stdint.h>
#include <stdbool.h>

int intersequen_intervals3 (double a,double b, double c, double d, double e, double f, double *inici, double *final) {
	int primer, ultim;

	*inici = a;

	if (c > *inici)
		*inici = c;
	if (e > *inici)
		*inici = e;

	*final = b;
	
	if (d < *final)
		*final = d;
	if (f < *final)
		*final = f;

	if (*inici > *final) {
		return 0;
	}

	primer = (int)*inici;

	if (primer < *inici) primer ++;

	ultim = (int)*final;

	if (primer > ultim) {
		return 0;
	}

	return ultim-primer+1;
}
