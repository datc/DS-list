#ifndef _TEST_H  
#define _TEST_H  
  
#ifdef __cplusplus  
extern "C" {  
#endif  

typedef int bool;
#define true 1
#define false 0
struct Stack
{
	int * base;
	int * top;
	int size;
};

extern void Display(struct Stack stk);
int before(int * a,int* b);
extern int index(int * base,int length);
  
extern void Init(struct Stack * stk,int size);
extern int Size(struct Stack stk);
extern int Length(struct Stack stk);
extern bool IsEmpty(struct Stack stk);
extern bool IsFull(struct Stack stk);
extern bool Push(struct Stack * stk,int v);
extern int Pop(struct Stack * stk,bool * ok);
extern int Seek(struct Stack stk,bool * ok);

#ifdef __cplusplus  
}  
#endif  
  
#endif  