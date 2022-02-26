SRC = src
INC = inc
BIN = bin

TARGET = main

SOURCE = $(wildcard $(SRC)/*.cpp)
OBJECT = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.cpp=.o)))

CC = g++
CFLAGS = -Wall -I $(INC)

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;31m
NC = \033[1;0m

$(BIN)/$(TARGET) : $(OBJECT)
	@echo "$(RED)Linking ...$(NC)"
	$(CC) -o $@ $^
	@echo "$(RED)Linking finnished$(NC)"


$(BIN)/%.o : $(SRC)/%.cpp
	@echo "$(YELLOW)Compiling ...$(NC)"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)Compilation finnished$(NC)"

help :
	@echo "src: $(SOURCE)"
	@echo "OBJ: $(OBJECT)"

.PHONY : help run

run : $(BIN)/$(TARGET)
	@echo "Running ..."
	$(BIN)/$(TARGET)

clean:
	rm -f $(OBJECT) $(BIN)/$(TARGET)
