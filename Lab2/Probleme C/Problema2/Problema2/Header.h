#pragma once
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS


void citeste_si_afiseaza(){
	FILE* f;
	fopen_s(&f,"TEXT.txt", "r");
	char str[300];
	int i = 0;
	while (fscanf_s(f, "%s", str, 100) != EOF) {
		i++;
		if (i % 2 == 0) printf("\t%s\n", str);
		else printf("%s",str);
	}
	fclose(f);
}

