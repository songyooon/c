#include<stdio.h>
//looping : for, while, do~while
/*
조건이 만족하는 동안 초기값부터 증감식에 따라 반복 수행
for(초기식;조건식;증감식){
	반복할구문;
}
*/
void main(){
	for(int i=0;i<=100;i++){
		sum+=i;
	}
	prinf("from 1 to 100\'plus total : %d",sum);
	sum=0;
	for(int i=0;i<=100;i+=2){
		sum+=i;
	}
	printf("from 1 to 100\' even number plus total : %d",sum);
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n")
	}
	printf("\n\n");
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3-i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
    
	
}

