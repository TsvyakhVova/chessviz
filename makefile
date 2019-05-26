DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src
DIR_TEST = ./build/test
DIR_T = ./test

.PHONY: clean all test run

all: $(DIR_BIN)/main $(DIR_BIN)/testing test

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/board.o $(DIR_BUILD)/board_print_plain.o
	g++ -Wall -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/board.o $(DIR_BUILD)/board_print_plain.o
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp 
$(DIR_BUILD)/board.o: $(DIR_SRC)/board.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/board.o -c $(DIR_SRC)/board.cpp    
$(DIR_BUILD)/board_print_plain.o: $(DIR_SRC)/board_print_plain.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/board_print_plain.o -c $(DIR_SRC)/board_print_plain.cpp


$(DIR_BIN)/testing: $(DIR_TEST)/main.o $(DIR_TEST)/test.o $(DIR_BUILD)/test.o
	g++ -o $(DIR_BIN)/testing $(DIR_TEST)/main.o $(DIR_BUILD)/test.o $(DIR_TEST)/test.o
$(DIR_TEST)/main.o: $(DIR_T)/main.cpp
	g++ -o $(DIR_TEST)/main.o -c $(DIR_T)/main.cpp 
$(DIR_TEST)/test.o: $(DIR_T)/test.cpp
	g++ -o $(DIR_TEST)/test.o -c $(DIR_T)/test.cpp    
$(DIR_BUILD)/test.o: $(DIR_SRC)/board.cpp
	g++ -o $(DIR_BUILD)/test.o -c $(DIR_SRC)/board.cpp

run: all
	$(DIR_BIN)/main

test:
	$(DIR_BIN)/testing 1> /dev/null



clean:
	rm -f $(DIR_BIN)/main
	rm -f $(DIR_BIN)/testing
	rm -f $(DIR_BUILD)/*.o
	rm -f $(DIR_TEST)/*.o
