package main

/*
#include "stack_c.h"
*/
import "C"

import (
	"fmt"

	. "github.com/toukii/assert"
)

//export Display
func Display(stk C.struct_Stack) {
	fmt.Println("\n=======================")
	fmt.Printf("Stack size:%d\n", stk.size)
	fmt.Printf("Stack length:%d\n", stk.length)
	p := stk.top
	for {
		if p == nil {
			break
		}
		fmt.Print(p.v, "|")
		p = C.pre(p)
	}
	fmt.Println()
}

func TestInit() {
	var stk C.struct_Stack
	C.Init(&stk, 3)
	Equal(nil, C.int(3), C.Capacity(stk))
	Equal(nil, C.bool(1), C.IsEmpty(stk))
}

func TestPush() {
	var stk C.struct_Stack
	C.Init(&stk, 2)
	Equal(nil, C.bool(1), C.IsEmpty(stk))
	C.Push(&stk, C.int(1))
	Equal(nil, C.bool(0), C.IsEmpty(stk), C.int(1), C.Length(stk))
	var ok C.bool
	v1 := C.Seek(stk, &ok)
	Equal(nil, C.int(1), v1)
	Equal(nil, C.bool(1), ok, C.int(1), C.Length(stk))
	C.Push(&stk, 2)
	Equal(nil, C.int(2), C.Length(stk), C.int(2), C.Capacity(stk))
	Equal(nil, C.bool(0), C.IsEmpty(stk))
	v := C.Seek(stk, &ok)
	Equal(nil, C.int(2), v, C.bool(1), ok, C.int(2), C.Length(stk))
	ok = C.Push(&stk, 3)
	Equal(nil, C.int(2), C.Length(stk), C.bool(0), ok)
	C.display(stk)
	Display(stk)
	v = C.Pop(&stk, &ok)
	Equal(nil, C.int(2), v, C.bool(1), ok, C.int(1), C.Length(stk))

	C.display(stk)
	Display(stk)
}

func main() {
	TestInit()
	TestPush()
	//	TestStack()
}
