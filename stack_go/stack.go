package stack_go

/*
非线程安全的
*/
type Stack struct {
	length int
	size   int
	ptr    *node
}

type node struct {
	v    int
	next *node
}

func NewStack() *Stack {
	return new(Stack)
}

func (s *Stack) Init(size int) {
	if size <= 0 {
		panic("size is too little!!")
	}
	s.length = 0
	s.size = size
	s.ptr = nil
}

func (s Stack) Capacity() int {
	return s.size
}

func (s Stack) Length() int {
	return s.length
}

func (s Stack) IsEmpty() bool {
	return s.length <= 0
}

func (s Stack) IsFull() bool {
	return s.length >= s.size
}

func (s *Stack) Push(v int) bool {
	if !s.IsFull() {
		pop := &node{v: v, next: s.ptr}
		s.ptr = pop
		s.length++
		return true
	}
	return false
}

func (s *Stack) Pop() (int, bool) {
	if s.IsEmpty() {
		return 0, false
	}
	v := s.ptr.v
	s.length--
	s.ptr = s.ptr.next
	return v, true
}

func (s *Stack) Seek() (int, bool) {
	if s.IsEmpty() {
		return 0, false
	}
	return s.ptr.v, true
}
