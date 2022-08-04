#include <stdio.h>
#include <ctype.h>

int main() {
	// 1. 모음/자음/숫자 판별
	char a;
	printf("Enter a letter(1): ");
	scanf_s("%c", &a, sizeof(a));

	if (isalpha(a)) {
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'
			|| a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
			printf_s("%c is a vowel.\n", a);
		}
		else {
			printf_s("%c is a consonant.\n", a);
		}
	}
	else{
		printf_s("%c is a Number.\n", a);
	}
	return 0;
}