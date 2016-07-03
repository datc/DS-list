#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef int Status;
typedef int SElemType;
struct SqStack{
    SElemType *base;
    SElemType *top;
    int stacksize;
};
