#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include <string.h>

void random_file(char* s) {
	int n;
	srand(time(NULL));

	n = rand() % 1000001 + 1000000;//luam random un numar de charactere intre 1000000 si 2000000

	FILE* f;
	f = fopen(s, "w");

	for (int i = 1; i <= n; i++) {
		char ch;
		ch = rand() % 26 + 97;//luam un numar random intre 97 si 122(corespondend ascii intre a si z)
		fprintf(f, "%c", ch);
	}

}
