



build:
	@g++ main.cpp ListToDo.cpp -o ListToDo.o

clean:
	@rm -f ListToDo.o

run:
	@.\ListToDo.o 
