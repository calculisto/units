.PHONY: all check clean data

all: data check

data:
	${MAKE} -C data
check:
	${MAKE} -C tests check
clean:
	${MAKE} -C tests clean
	${MAKE} -C data  clean
