/* gcc -Wall main.c -o program 
ACII
65 - 122(AZ-az) 32-space
33 -122
algoritmo




*/
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
int a, j, k, l, m;
int b;
int i = 0;
int arrSeq [10000];
int longSeq() {
	a = rand() % 30+ 1;
	return a ;
}
int valuePosition() {
	j = rand() % 122 + 119;
	return j ;
}

int main() {
	int cnt = sizeof(arrSeq)/sizeof(int);
	int inN;
	const time_t timer = time(NULL);
	srand(timer);
	/*printf("long %d\n", b);
*/
	while (i<cnt) {
		b = valuePosition();
		arrSeq[i] = b;			
		++i;
	}
	i = 0;
	while (i<cnt){
		k = longSeq();
		l = k+1;
		m = 0;
		while(m<l){
			/*putchar(arrSeq[i]);*/
			inN = arrSeq[i];
			/*printf("%d", inN);*/
			putchar(inN);
			++i;
			++m;	
		}
		printf("\n");
	
	}
	int testChar = 98;
	while(testChar<=122)
	{
		putchar(testChar);
		++testChar;
	
	}
	i = 0;
	int arrTest[130];
	while (i<122){
		arrTest[i] = i;
		++i;
	}
	i=0;
	while (i<122) 
	{
		printf("%d - \n", i);
		putchar(arrTest[i]);
		
		++i;
	}
	printf("привет");
	return 0;
}
