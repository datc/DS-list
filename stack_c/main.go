package main

/*
#include "./stack_c.c"

*/
import "C"
import (
	"fmt"
	. "github.com/toukii/equal"
)

func main() {
	var Stk C.struct_SqStack
	C.stack()
	fmt.Println(Stk.stacksize)
	Equal(nil, 0, Stk.stacksize)
}

func test() {
}
