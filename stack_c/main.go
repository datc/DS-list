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
	// C.InitStack(Stk)
	fmt.Println(Stk)
}

func test() {
	type p C.struct_Person
	person := p{C.CString("Giorgis"), 30, 6, 175}
	fmt.Println(person)
	fmt.Println(C.GoString(person.name))
	fmt.Println(person.age)
	fmt.Println(person.height)
	fmt.Println(person.weight)
}
