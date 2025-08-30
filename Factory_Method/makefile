# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target binary name
TARGET = examApp

# Find all .cpp files in project
SRC = $(wildcard *.cpp \
             gate_factory/*.cpp \
             jee_factory/*.cpp)

# Generate object files list
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(TARGET)

# Link the program
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)
	@echo "✅ Build complete: $(TARGET)"

# Compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "🔨 Compiled: $<"

# Clean build artifacts
clean:
	rm -f $(OBJ) $(TARGET)
	@echo "🧹 Cleaned!"

# Rebuild everything
rebuild: clean all
