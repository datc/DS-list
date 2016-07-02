#include <stdio.h>
// #include "./stack_c.h"

void stack(){
	printf("%s\n--STACK", "stack");
}
#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef int Status;
typedef int SElemType;

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct SqStack{
    int *base;
    int *top;
    int Stacksize;
    Status sts;
} ;

void Display(int a,Person stk){

}
/*int InitStack(SqStack s){
	s.stacksize = 0;
	s.top = NULL;
	s.base = NULL;
	return 1;
}*/

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }