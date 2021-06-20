all: lib nif c

lib:
	gcc -o lib_calc.so -c lib_calc.c

nif: lib_calc.so
	gcc -shared -o lib_calc_nif.so -fPIC lib_calc_nif.c lib_calc.so

c: lib_calc.so
	gcc -o calc calc.c lib_calc.so

clean:
	rm lib_calc.so lib_calc_nif.so calc
