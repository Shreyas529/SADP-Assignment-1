# Makefile for Abstract Factory Method implementation
# Directories
SRC_DIR = .
FACTORY_DIR = Factory
QUESTION_DIR = Question
GATE_QUESTIONS_DIR = $(QUESTION_DIR)/GATEQuestions
JEE_QUESTIONS_DIR = $(QUESTION_DIR)/JEEQuestions
QUESTION_TYPES_DIR = $(QUESTION_DIR)/QuestionTypes


# Source files (using wildcards)
SRCS = *.c++ $(FACTORY_DIR)/*.c++ $(QUESTION_DIR)/GATEQuestions/*.c++ $(QUESTION_DIR)/JEEQuestions/*.c++

# Object files
OBJS = $(SRCS:.c++=.o)

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I$(FACTORY_DIR) -I$(QUESTION_DIR) -I$(GATE_QUESTIONS_DIR) -I$(JEE_QUESTIONS_DIR) -I$(QUESTION_TYPES_DIR)

# Executable
TARGET = abstract_factory_app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.c++
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
