all: clean test
programtest: tests.cpp 
	g++ -fsanitize=address --std=c++17 tests.cpp -o programtest 
test: programtest 
	./programtest
clean:
	rm -f programtest