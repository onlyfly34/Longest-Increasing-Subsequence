#include <stdio.h>
#include <stdlib.h>
#include "dynamicArray.h"
#include "binary_search.h"

void find_LIS_string(Array *source_string, Array *LIS_string){
	int i;
	insertArray(LIS_string, source_string->array[0]);
	for(i=1;i<(int)source_string->used;i++){
		int temp = BinarySearch(LIS_string,source_string->array[i],0,LIS_string->used-1);
		if(temp>LIS_string->used-1){
			insertArray(LIS_string, source_string->array[i]);
		}
		else if(temp==LIS_string->used-1){
			LIS_string->array[temp] = source_string->array[i];
		}
	}
}

int main(){
	Array source_string, LIS_string;
	FILE *fp;
	int input,i;

	initArray(&source_string, 5);
	initArray(&LIS_string, 5);

	fp = fopen("sorted_list.txt","r");
	while(fscanf(fp, "%d", &input) != EOF){
		insertArray(&source_string, input);
	}

	find_LIS_string(&source_string, &LIS_string);

	printf("Longest increasing subsequence: [ ");
	for(i=0;i<(int)LIS_string.used;i++)
		printf("%d ",LIS_string.array[i]);
	printf("]\n");

	freeArray(&source_string);
	freeArray(&LIS_string);
	return 0;
}