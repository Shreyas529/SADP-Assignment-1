# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

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