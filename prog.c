#include <stdio.h>

int fibi(int n){
	int a = 1, b = 1, c, i;
	for(i = 3; i <= n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main(int argc, char *argv[]){
	int i;
	for(i = 0; i < 100; i++)
		printf("f(%d) = %d\n", i, fibi(i));
	return 0;
}
