package main

/*
#cgo LDFLAGS: -shared lib_calc.so
#include "lib_calc.h"
*/
import "C"
import "fmt"

func main() {
	var resultado = C.multiplicar(32, 2)
	fmt.Println(resultado)
}
