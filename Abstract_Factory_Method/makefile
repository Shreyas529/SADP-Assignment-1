# Build Google Test unit test executable for all GATE and JEE question types
test_all: test_all.o \
	Question/GATEQuestions/gate_mcq.o Question/GATEQuestions/gate_fillin.o Question/GATEQuestions/gate_numerical.o Question/GATEQuestions/gate_truefalse.o \
	Question/JEEQuestions/jee_mcq.o Question/JEEQuestions/jee_fillin.o Question/JEEQuestions/jee_numerical.o Question/JEEQuestions/jee_truefalse.o
	$(CXX) $(CXXFLAGS) $^ -o test_all -lgtest -lgtest_main -pthread

# Run all tests
run_test_all: test_all
	./test_all
# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./Question

# Target binary name
TARGET = examApp

# Find all .c++ files in project
SRC = $(wildcard *.c++ \
                Factory/*.c++ \
                Question/JEEQuestions/*.c++ \
				Question/GATEQuestions/*.c++ \
				Question/QuestionTypes/*.c++ )

# Generate object files list
OBJ = $(SRC:.c++=.o)

# Default target
all: $(TARGET)

# Link the program
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)
	@echo "✅ Build complete: $(TARGET)"

# Compile .c++ to .o
%.o: %.c++
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "🔨 Compiled: $<"

# Clean build artifacts
clean:
	rm -f $(OBJ) $(TARGET)
	@echo "🧹 Cleaned!"

# Rebuild everything
rebuild: clean all