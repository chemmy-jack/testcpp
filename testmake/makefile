SRC = src
INC = inc
BIN = bin

TARGET = main

SOURCE = $(wildcard $(SRC)/*.cpp)
OBJECT = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.cpp=.o)))

CC = g++
CFLAGS = -Wall -I $(INC)

$(BIN)/$(TARGET) : $(OBJECT)
	$(CC) -o $@ $^


$(BIN)/%.o : $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

help :
	@echo "src: $(SOURCE)"
	@echo "OBJ: $(OBJECT)"

clean:
	rm -r $(BIN)/*
