$(shell mkdir -p bin htmlcov lib testbin testobj obj)
# after directory is made, the entire all is made

all: link
	./teststrutils
	gcovr --html-details htmlcov/index.html

link: StringUtils.o StringUtilsTest.o
	g++ -fprofile-arcs -ftest-coverage StringUtils.o StringUtilsTest.o -o teststrutils -lgtest -lgtest_main -pthread

StringUtils.o: 
	g++ -fprofile-arcs -ftest-coverage -std=c++17 -c src/StringUtils.cpp -o StringUtils.o

StringUtilsTest.o: 
	g++ -fprofile-arcs -ftest-coverage -std=c++17 -c testsrc/StringUtilsTest.cpp -o StringUtilsTest.o

clean:
	rm -rf bin htmlcov lib obj testbin testobj *.o *.gcda *.gcno teststrutils



# All commands aare instated
# Forgot C standards 
# Execute
# coverage tests
# missling linker parts

