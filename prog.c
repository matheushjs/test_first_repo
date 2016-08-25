#include <stdio.h>

int fibr(int n){
	if(n == 0) return 0;
	if(n < 3) return 1;
	return fibr(n-1) + fibr(n-2);
}

int fibi(unsigned int n){
	int a = 1, b = 1, c = 1, i;
	if(!n) return 0;
	for(i = 3; i <= n; c = a + b, a = b, b = c, i++);
	return c;
}

void print_me(){
	printf("Hello!\n");
}

int main(int argc, char *argv[]){
	unsigned int i;
	for(i = 0; i < 100; i++)
		printf("f(%d) = %d\n", i, fibi(i));;
	return 0;
}
