#include <stdio.h>
main()

{
	float fahr, celsius;
	int dolni, horni, krok;
	dolni = 0; /*spodní mez*/
	horni = 300; /*horni mez*/
	krok = 20;
	
	printf("Prevod F do C\n"); /*nadpis*/
	
	fahr = dolni;
	while (fahr <= horni) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius); /*vytiskne první číslo v řádku o poli 3 číslic a druhé v poli o šířce 6 číslic*/
		fahr = fahr + krok;
	}
	
}
