#include <iostream>
using namespace std;
extern "C" {

#define true 1
#define false 0

struct node{
	int v;
	struct node * pre;
};

struct node* NewNode(struct node * pre, int v){
	struct node* nd = new node;
	nd->v = v;
	nd->pre = pre;
	return nd;	
}

struct Stack
{
	struct node * top;
	int size;
	int length;
};

/*
* 展示栈内容
*/
extern void Display(struct Stack stk);

/*
* 判断栈顶元素距离栈底高度，Go不能做指针运算，需要提供该函数
*/
struct node * pre(struct node * nd){
	if (NULL != nd)
	{
		return nd->pre;
	}
	return NULL;
}

void display(struct node * nd){
	int a;
	cout<<"\n\n********************************\n";
	while(nd!=NULL){
		cout<<nd->v<<"|";
		// nd=nd->pre;
		nd = pre(nd);
		if(a++>10) break;
	}
}

// 初始化
void Init(struct Stack * stk,int size){
	stk->top = NULL;
	stk->size = size;
	stk->length = 0;
}

// 栈容量
int Capacity(Stack stk){
	return stk.size;
}

// 栈大小
int Length(struct Stack stk){
	return stk.length;
}

// 是否为空
bool IsEmpty(struct Stack stk){
	return Length(stk)<=0;
}

// 是否满栈
bool IsFull(struct Stack stk){
	if (Length(stk) >= Capacity(stk))
	{
		return true;
	}
	return false;
}

// 压栈
bool Push(struct Stack * stk,int v){
	if (IsFull(*stk))
	{
		return false;
	}
	stk->top = NewNode(stk->top, v);
	stk->length++;
	return true;
}

// 弹栈
int Pop(struct Stack * stk,bool * ok){
	if (IsEmpty(*stk))
	{
		*ok = false;
		return -1;
	}
	*ok = true;
	stk->length--;
	int v = stk->top->v;
	struct node * n = stk->top;
	stk->top = stk->top->pre;
	delete n;
	return v;
}

// 查看栈顶元素
int Seek(struct Stack stk,bool * ok){
	if (NULL == stk.top)
	{
		*ok = false;
		return 0;
	}
	*ok = true;
	return stk.top->v;
}

void Destory(struct Stack stk){
	struct node * n = stk.top;
	struct node * tmp;
	while(n != NULL){
		tmp = n->pre;
		cout<<"destory:"<<n->v<<endl;
		delete n;
		n = tmp;
		if (stk.length-- <0)
		{
			break;
		}
	}
	stk.top = NULL;
	stk.size = 0;
	stk.length = 0;
	cout<<"stack destoried, stack.top is NULL:"<<(stk.top==NULL)<<endl;
}

void test(){
	Stack stk;
	Init(&stk,3);
	Push(&stk,101);
	Push(&stk,102);
	bool ok = false;
	int v = Seek(stk,&ok);
	cout<<"\nseek:"<<v<<":"<<ok<<endl;
	Destory(stk);
}

}
