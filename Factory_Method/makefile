# Build Google Test unit test executable for all GATE and JEE question types
test_all: test_all.o \
	gate_factory/gate_mcq.o gate_factory/gate_fillin.o gate_factory/gate_numerical.o gate_factory/gate_truefalse.o \
	jee_factory/jee_mcq.o jee_factory/jee_fillin.o jee_factory/jee_numerical.o jee_factory/jee_truefalse.o \
	gate_question.o jee_question.o
	$(CXX) $(CXXFLAGS) $^ -o test_all -lgtest -lgtest_main -pthread

# Run all tests
run_test_all: test_all
	./test_all
# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target binary name
TARGET = examApp

# Find all .c++ files in project
SRC = $(wildcard *.c++ \
				gate_factory/*.c++ \
				jee_factory/*.c++)

# Generate object files list
OBJ = $(SRC:.c++=.o)

# Default target
all: $(TARGET)

# Link the main program (exclude test_factory.o)
$(TARGET): $(filter-out test_factory.o,$(OBJ))
	$(CXX) $(CXXFLAGS) $^ -o $(TARGET)
	@echo "✅ Build complete: $(TARGET)"

# Compile .c++ to .o
%.o: %.c++
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "🔨 Compiled: $<"

# Build Google Test unit test executable
test: test_factory.o gate_question.o jee_question.o gate_factory/gate_fillin.o gate_factory/gate_mcq.o gate_factory/gate_numerical.o gate_factory/gate_truefalse.o jee_factory/jee_fillin.o jee_factory/jee_mcq.o jee_factory/jee_numerical.o jee_factory/jee_truefalse.o
	$(CXX) $(CXXFLAGS) $^ -o test -lgtest -lgtest_main -pthread

# Run tests
run_test: test
	./test

# Clean build artifacts
clean:
	rm -f $(OBJ) $(TARGET) test
	@echo "🧹 Cleaned!"

# Rebuild everything
rebuild: clean all
