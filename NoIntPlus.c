#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int solution(int numbers[], size_t numbers_len);

int main(void){
	int numbers_len=8;
	int result;
	int numbers[8] = {1,2,3,4,6,7,8,0};

	result = solution(numbers,numbers_len);
	printf("%d\n", result);

	return 0;
}

int solution(int numbers[], size_t numbers_len){
	int flag[10] = {0,};
	int sum=0;
	int answer=-1;
	
	for(int i=0; i<numbers_len; i++){
		flag[numbers[i]]=1;
	}

	for(int j=0; j<10; j++){
		if(flag[j] == 0){
			sum+=j;
		}
	}
	if(sum!=0){
		answer=sum;
	}
	return answer;
}
