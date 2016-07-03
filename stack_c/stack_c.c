#include "stdio.h"
 #include "stack_c.h"

void stack(){
	printf("%s\n--STACK", "stack");
}

void InitStack(struct SqStack s){
 	s.stacksize = 0;
	s.top = NULL;
	s.base = NULL;
// 	// return 1;
 }

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }
