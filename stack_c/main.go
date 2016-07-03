package main

/*
#include "./stack_c.c"

*/
import "C"
import (
	"fmt"
)

func main() {
	var Stk C.struct_SqStack
	C.stack()
 C.InitStack(Stk)
	fmt.Println(Stk)
}

func test() {
}
