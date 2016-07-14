#ifndef _TEST_H
#define _TEST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef int bool;
#define true 1
#define false 0

struct node{
	int v;
	struct node * pre;
};

struct Stack
{
	struct node * top;
	int size;
	int length;
};

void Display(struct Stack stk);
struct node* pre(struct node * nd);

void test();
void display(struct Stack stk);
void Init(struct Stack * stk,int size);
int Capacity(struct Stack stk);
int Length(struct Stack stk);
bool IsEmpty(struct Stack stk);
bool IsFull(struct Stack stk);
bool Push(struct Stack * stk,int v);
int Pop(struct Stack * stk,bool * ok);
int Seek(struct Stack stk,bool * ok);
void Destory(struct Stack stk);

#ifdef __cplusplus
}
#endif

#endif
