package main

/*
#include "./stack_c.cpp"

*/
import "C"
import (
	"fmt"
	// "unsafe"
)

func main() {
	type Stk C.struct_SqStack
	C.stack()
	// top := (*C.int)(unsafe.Pointer(nil))
	// stk := Stk{}
	stk := Stk{}
	stk.Stacksize = 3
	fmt.Println(stk, C.STACK_INIT_SIZE)
	// C.free
	test()
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
