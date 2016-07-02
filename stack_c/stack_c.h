#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef int Status;
typedef int SElemType;
struct SqStack{
    SElemType *base;
    SElemType *top;
    int stacksize;
}

// Status InitStack( SqStack s ); //construct a blank stack

/*Status DestroyStack( SqStack &s ); //destroy a stack

Status ClearStack( SqStack &s ); //set stack empty

Status StackEmpty( SqStack s ); //if stack empty,return true, else return false

int StackLength( SqStack s );  //return numbers of s

Status GetTop( SqStack s, SElemType &e ); //if s not empty, return top element, else return ERROR

Status Push( SqStack &s, SElemType e ); //insert element e into s, on top

Status Pop( SqStack &s, SElemType &e );
// if stack not empty, pop top element & return OK, else return ERROR

Status StackTraverse( SqStack S, Status( *visit )() );
// call visit() to each element from base to top
*/