DEPENDENCIES_HEADERS=\
	../../external/taocpp/pegtl/include


PROJECT=units
LINK.o=${LINK.cc}
CXXFLAGS+=-std=c++2a -Wall -Wextra $(foreach dir, ${DEPENDENCIES_HEADERS}, -I../${dir})
LDLIBS+= -lfmt

