SRC = src
INC = inc
BIN = bin

TARGET = main

SOURCE = $(wildcard $(SRC)/*.cpp)
OBJECT = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.cpp=.o)))

CC = g++
CFLAGS = -Wall -I $(INC)

$(BIN)/$(TARGET) : $(OBJECT)
	@echo "Linking ..."
	$(CC) -o $@ $^
	@echo "Linking finnished"


$(BIN)/%.o : $(SRC)/%.cpp
	@echo "Compiling ..."
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilation finnished"

help :
	@echo "src: $(SOURCE)"
	@echo "OBJ: $(OBJECT)"

.PHONY : help run

run : $(BIN)/$(TARGET)
	@echo "Running ..."
	$(BIN)/$(TARGET)

clean:
	rm -f $(OBJECT) $(BIN)/$(TARGET)
