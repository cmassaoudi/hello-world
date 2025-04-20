all:	test
	@g++ main.cpp -o hello
clean:
	@rm -f hello test
test:
	@g++ tests/test.cpp -o test -lcppunit
