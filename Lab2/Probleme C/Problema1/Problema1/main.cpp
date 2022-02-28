#include "header.h"


int main() {
	int nr;
	srand(time(NULL));
	nr = rand() % 11 + 10;//luam un numar random intre 10 si 20 pentru a specifica numarul de fisiere
	for (int i = 1; i <= nr; i++) {
		int n;
		char s[17];
		n = sprintf(s, "new file %d.txt", i);
		random_file(s);
	}
	
}


