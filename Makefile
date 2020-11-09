compiler := g++
sourcefile := list_test.cpp
outputflag := -o
outfile := test.out
exec-test := ./${outfile}
delete-command := rm
ifeq ($(OS),Windows_NT)
	outfile = test.exe
	exec-test := ${outfile}
	delete-command := del
endif

.PHONY: test
test:
	@${compiler} ${sourcefile} ${outputflag} ${outfile}
	@${exec-test}
	@${delete-command} ${outfile}