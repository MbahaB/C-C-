#include <stdio.h>
#include <stdlib.h>

void append(int arr[10], int nmb){
	
	int i;
	int new_arr[sizeof(arr)];
	
	
	for(i=0; i<sizeof(arr); i++){
		new_arr[i+1] = arr[i];
		
	}
	new_arr[0] = nmb;
	
	for(i=0; i<sizeof(arr); i++){
		printf("%d  ", new_arr[i]);
		
	}
	return new_arr;
	
}


int main(){
	int array[10]= {2,3,4,5};
	append(array, 3);	
}