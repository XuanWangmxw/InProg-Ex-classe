#include <stdio.h>
#include <assert.h>

int comptar_digits(int n);

int main(void) { 

	assert(comptar_digits(5) == 1);
	printf("Test OK: un enter d'un digit\n");

	assert(comptar_digits(42) == 2);
	printf("Test OK: un enter de dos digits\n");

	assert(comptar_digits(1234) == 4);
	printf("Test OK: un enter de quatres digits\n");

	assert(comptar_digits(-567) == 3);
	printf("Test OK: un enter negatiu de tres digits\n");

	assert(comptar_digits(0) == 1);
	//Cas extrem
	printf("Test OK: enter 0 \n");

	return 0;
}

//Funció de comptar_digits


int comptar_digits(int n) {
	int suma = 0;

	if ( n==0 ) {
		return 1;
	}

	/*
	 Identificació: divisions successives de n
	 Primer: n
	 Seg(n): n/10
	 FiSeq(n): n == 0
	 Recorregut/Cerca? Recorregut
	*/

	while ( n!= 0) {
		suma ++;
		n = n/10; //es una divisio entera per eliminar un digit que esta contat
	}

	return suma;
}

	

