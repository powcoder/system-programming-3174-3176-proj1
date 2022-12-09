https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "proj1.h"

void generate_input(int*arr, int ninput){
   srand(time(NULL));
   int result = 0;
   int cnt =0;
   while(cnt < ninput){
   	result = rand()%BILLION;
	arr[cnt]=result;
	cnt++;
   } 
}

void *sets_shared_memory(){ // FIX ME!
	void *ret = NULL;
	//
	return ret;
}

int child_find_min_value(int id, int *arr, int chunk){ // FIX ME
	int min = BILLION;
	//
	return min;
}

void put_value(int *arr, int n_input, int id, int min){ // FIX ME
	return;
}

int parent_find_min_value(void *arr,int n_input, int n_process){ // FIX ME
	int min = BILLION;
	return min;
}
