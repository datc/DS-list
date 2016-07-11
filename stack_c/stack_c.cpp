#include <iostream>
using namespace std;
extern "C" {  

#define true 1
#define false 0

struct Stack
{
	int * base;
	int * top;
	int size;
};

extern void Display(struct Stack stk);
int before(int * a,int* b){
	return a - b;
}

int index(int * base,int length){
	return base[length];
}

void Init(struct Stack * stk,int size){
	stk->base = new int[size];
	stk->top = stk->base;
	stk->size = size;
}

int Size(Stack stk){
	return stk.size;
}

int Length(struct Stack stk){
	return before(stk.top,stk.base);
}

bool IsEmpty(struct Stack stk){

}

bool IsFull(struct Stack stk){
	if (Length(stk) >= Size(stk))
	{
		return true;
	}
	return false;
}

bool Push(struct Stack * stk,int v){
	if (IsFull(*stk))
	{
		return false;
	}
	*(stk->top) = v;
	(stk->top)++;
	return true;
}

int Pop(struct Stack * stk,bool * ok){

}

int Seek(struct Stack stk,bool * ok){

}
  
}  