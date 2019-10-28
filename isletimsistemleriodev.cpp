#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int degisken;
	printf("Bir sayi girin :");
	scanf("%d",&degisken);
	printf("Sayi : %d\n",degisken);
	int pid;
	while(degisken != 1){
		pid = fork(5);
		if(degisken%2==0){
			degisken = degisken/2;
		}
		else{
			degisken = (3*degisken+1)/2;
		}
		printf("%d\n",degisken);
	}
	printf("%d\n",degisken);
}
