#include <stdio.h>

int fibr(int n){
	if(n == 0) return 0;
	if(n == 1 || n == 2) return 1;
	return fibr(n-1) + fibr(n-2);
}

int fibi(int n){
	int a = 1, b = 1, c, i;
	for(a = 1, b = 1, i = 3; i <= n; c = a + b, a = b, b = c, i++);
	return c;
}

void print_me(){
	printf("Hello!\n");
}

int main(int argc, char *argv[]){
	int i;
	for(i = 0; i < 100; i++)
		printf("f(%d) = %d\n", i, fibi(i));;
	return 0;
}
