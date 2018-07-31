#include <stdio.h>
#include <stdlib.h>

int main() {
	char adn[16][61] = {
		"gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaa",
		"atgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcac",
		"tttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgca",
		"ttcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgctt",
		"ggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcac",
		"gaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgct",
		"gtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctc",
		"atgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatc",
		"agtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgat",
		"gcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctg",
		"aaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaat",
		"gcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagctt",
		"gctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagt",
		"gtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctg",
		"gatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactcc",
		"gtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt"};

	char busqueda[16*(61-1)+1];

	int posicion = 0,
		i,
		j,
		largoBusqueda = 0,
		matches = 0;

	printf("Ingrese su busqueda deseada: ");
	scanf("%s", busqueda);

	for (i = 0; i < sizeof busqueda; i++)
		if (busqueda[i] == '\0') break;
		else largoBusqueda++;

	printf("\n");


	for (i = 0; i < 16; i++) {
		char *match = strstr(adn[i], busqueda);

		if (match != NULL) {
			posicion = match - adn[i];
			matches++;

			for (j = 0; j < sizeof adn[i]; j++) {
				if (j >= posicion && j < posicion + largoBusqueda)
					// :)
					adn[i][j] == 'a' ? printf("A") :
					adn[i][j] == 't' ? printf("T") :
					adn[i][j] == 'c' ? printf("C") :
					adn[i][j] == 'g' ? printf("G") :
					printf("%c", adn[i][j]);
				else
					printf("%c", adn[i][j]);
			}


			printf("\n%*c", posicion + 1, '^');
			for (j = 0; j < largoBusqueda - 1; j++, printf("^"));
		} else {
			for (j = 0; j < sizeof adn[i]; j++)
				printf("%c", adn[i][j]);

			printf("\n");
		}

		printf("\n");
	}

	if (matches < 1)
		printf("Ningun match.\n");
	else if (matches == 1)
		printf("Se encontro un match.\n");
	else
		printf("Se encontraron %d matches.\n", matches);

	return 0;
}
