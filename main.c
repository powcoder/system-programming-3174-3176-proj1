https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "proj1.h"

void signal_handler(){
	;
}

int main(int argc, char**argv){
	// 1. Set the number of input and process using arguments.
	
	// 2. Fill the sets_shared memory function in proj1.c file
	
	// 3. Block the SIGCONT signal
	
	//void *arr= sets_shared_memory();
	//generate_input((int *)arr,n_input);

        // 4. 
	// 4-1. Create child processes 
	// 4-2. Unblock the SIGCONT signal
	// 4-3  and pause them.
	// 
	// 5. Childs: After resuming, find the minimum value from their chunk.
	// 6. Childs: After finding the minimum value, store it to the share memory spaces.
	//            Dest : arr + (size of int * number of input + child process index)
	//    
	//for(i=0; i<n_process; i++){
	//	if( pid_arr[i] = fork() == 0 ){
			// min = child_find_min_value(process_idx, int_arr, chunk);
			// put_value(int_arr, n_input, process_idx, min);
			//			return 0;
	//	}
	//	else{
	//		;
	//	}
	//}
        //7. 
	//7.1 Unblock the SIGCONT signal
	//7.2 Pause parent after creating child processes
	
	//8. After resuming, parent reaps child processes
	
	//9. Find min values from the results of child processes.
	//parent_find_min_value(arr, n_input, n_process);

	//10. Print the minimum value.

	//11. Unmap, and Unlink shared memory region
	return 0;

}
