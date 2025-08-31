# SADP Assignment 1: Design Patterns Implementation

## Overview

This repository contains implementations of two fundamental **Design Patterns** in C++: the **Factory Method Pattern** and the **Abstract Factory Pattern**. The implementation focuses on creating different types of exam questions for two popular Indian engineering entrance examinations:

- **GATE** (Graduate Aptitude Test in Engineering)
- **JEE** (Joint Entrance Examination)

## Project Structure

```
SADP-Assignment-1/
├── Factory_Method/                 # Factory Method Pattern Implementation
│   ├── gate_factory/              # GATE question factories
│   ├── jee_factory/               # JEE question factories
│   ├── main.c++                   # Demonstration program
│   ├── makefile                   # Build configuration
│   └── test_*.c++                 # Unit tests
│
├── Abstract_Factory_Method/        # Abstract Factory Pattern Implementation
│   ├── Factory/                   # Abstract factories
│   ├── Question/                  # Question implementations
│   │   ├── GATEQuestions/        # GATE-specific questions
│   │   ├── JEEQuestions/         # JEE-specific questions
│   │   └── QuestionTypes/        # Base question types
│   ├── abstract_factory_main.c++  # Demonstration program
│   ├── makefile                   # Build configuration
│   └── test_all.c++              # Unit tests
│
├── factory_pattern_activity.pdf   # Assignment documentation
└── README.md                      # This file
```

## Design Patterns Implemented

### 1. Factory Method Pattern

The Factory Method Pattern provides an interface for creating objects, but allows subclasses to decide which class to instantiate. In this implementation:

- **Abstract Creator**: `Factory` class
- **Concrete Creators**: Specific factories like `GATE_mcq_Factory`, `JEE_fillin_Factory`
- **Product**: `Question` abstract class
- **Concrete Products**: Specific question implementations

#### Key Components:
- `Factory` - Base factory interface
- `GATE_*_Factory` - Factories for GATE question types
- `JEE_*_Factory` - Factories for JEE question types
- Question evaluation classes for each type

### 2. Abstract Factory Pattern

The Abstract Factory Pattern provides an interface for creating families of related objects. In this implementation:

- **Abstract Factory**: `ExamFactory` class
- **Concrete Factories**: `GATE_Factory`, `JEE_Factory`
- **Product Families**: Question types (MCQ, Numerical, True/False, Fill-in)

#### Key Components:
- `ExamFactory` - Abstract factory interface
- `GATE_Factory` - Creates all GATE question types
- `JEE_Factory` - Creates all JEE question types
- Question implementation classes organized by exam type

## Architecture Overview

### Factory Method Pattern Structure
```
Factory (Abstract)
├── GATE_mcq_Factory
├── GATE_fillin_Factory  
├── GATE_numerical_Factory
├── GATE_truefalse_Factory
├── JEE_mcq_Factory
├── JEE_fillin_Factory
├── JEE_numerical_Factory
└── JEE_truefalse_Factory

Question (Abstract)
├── GATE_mcq_eval
├── GATE_fillin_eval
├── GATE_numerical_eval
├── GATE_truefalse_eval
├── JEE_mcq_eval
├── JEE_fillin_eval
├── JEE_numerical_eval
└── JEE_truefalse_eval
```

### Abstract Factory Pattern Structure
```
ExamFactory (Abstract)
├── GATE_Factory
│   ├── createMCQQuestion() → GATEMCQQuestion
│   ├── createNumericalQuestion() → GATENumericalQuestion  
│   ├── createTrueFalseQuestion() → GATETrueFalseQuestion
│   └── createFillInQuestion() → GATEFillInQuestion
└── JEE_Factory
    ├── createMCQQuestion() → JEEMCQQuestion
    ├── createNumericalQuestion() → JEENumericalQuestion
    ├── createTrueFalseQuestion() → JEETrueFalseQuestion
    └── createFillInQuestion() → JEEFillInQuestion
```

## Question Types Supported

Both patterns support four types of questions:

1. **MCQ (Multiple Choice Questions)** - Standard multiple-choice format
2. **Numerical** - Questions requiring numerical answers
3. **True/False** - Binary choice questions
4. **Fill-in-the-blank** - Questions with missing information to complete

## Building the Project

### Prerequisites

- C++ compiler with C++17 support (g++ recommended)
- Make utility
- Google Test framework (optional, for running tests)

### Factory Method Pattern

```bash
cd Factory_Method
make clean

# Build all required object files
make gate_question.o jee_question.o main.o
make gate_factory/gate_fillin.o gate_factory/gate_mcq.o gate_factory/gate_numerical.o gate_factory/gate_truefalse.o
make jee_factory/jee_fillin.o jee_factory/jee_mcq.o jee_factory/jee_numerical.o jee_factory/jee_truefalse.o

# Link the main executable (excluding test files)
g++ -std=c++17 -Wall -Wextra gate_question.o jee_question.o main.o \
    gate_factory/*.o jee_factory/*.o -o examApp

./examApp              # Run demonstration
```

### Abstract Factory Pattern

```bash
cd Abstract_Factory_Method
make clean

# Compile all source files
g++ -std=c++17 -Wall -Wextra -I./Question -c abstract_factory_main.c++ -o abstract_factory_main.o
g++ -std=c++17 -Wall -Wextra -I./Question -c Factory/gateFactory.c++ -o Factory/gateFactory.o
g++ -std=c++17 -Wall -Wextra -I./Question -c Factory/jeeFactory.c++ -o Factory/jeeFactory.o

# Compile question implementations
for file in Question/JEEQuestions/*.c++ Question/GATEQuestions/*.c++; do
    g++ -std=c++17 -Wall -Wextra -I./Question -c "$file" -o "${file%.c++}.o"
done

# Link the executable
g++ -std=c++17 -Wall -Wextra abstract_factory_main.o Factory/*.o \
    Question/JEEQuestions/*.o Question/GATEQuestions/*.o -o examApp

./examApp              # Run demonstration
```

### Running Tests (Optional)

**Note**: Tests require Google Test framework to be installed.

```bash
# Install Google Test (Ubuntu/Debian)
sudo apt-get install libgtest-dev libgtest-main

# Factory Method tests
cd Factory_Method && make run_test

# Abstract Factory tests  
cd Abstract_Factory_Method && make run_test_all
```

## Usage Examples

### Factory Method Pattern Usage

```cpp
#include "gate_factory/gate_mcq_factory.h"
#include "jee_factory/jee_numerical_factory.h"

// Create specific factories
GATE_mcq_Factory gateFactory;
JEE_numerical_Factory jeeFactory;

// Create questions using factories
Question* gateQuestion = gateFactory.createQuestion();
Question* jeeQuestion = jeeFactory.createQuestion();

// Evaluate responses
string gateResult = gateQuestion->evaluate("Option A");
string jeeResult = jeeQuestion->evaluate("42.5");
```

### Abstract Factory Pattern Usage

```cpp
#include "Factory/gateFactory.h"
#include "Factory/jeeFactory.h"

// Create family factories
ExamFactory* gateFactory = new GATE_Factory();
ExamFactory* jeeFactory = new JEE_Factory();

// Create different question types from same family
Question* gateMCQ = gateFactory->createMCQQuestion();
Question* gateNumerical = gateFactory->createNumericalQuestion();
Question* jeeMCQ = jeeFactory->createMCQQuestion();
Question* jeeNumerical = jeeFactory->createNumericalQuestion();

// Evaluate responses
string result1 = gateMCQ->evaluate("Option B");
string result2 = jeeNumerical->evaluate("3.14159");
```

## Key Design Decisions

### 1. Pattern Selection Rationale

#### Factory Method vs Abstract Factory
- **Factory Method**: Used when you need to create one type of object at a time. Each factory creates a specific question type (e.g., `GATE_mcq_Factory` creates only GATE MCQ questions).
- **Abstract Factory**: Used when you need to create families of related objects. Each factory creates all question types for a specific exam (e.g., `GATE_Factory` creates all GATE question types).

#### When to Use Which Pattern
- **Factory Method**: When extending with new question types or exam formats
- **Abstract Factory**: When maintaining consistency within an exam family

### 2. Separation of Concerns
- Each pattern is implemented in its own directory
- Question types are clearly separated by exam category
- Factory implementations are modular and extensible

### 2. Polymorphism
- Virtual functions enable runtime polymorphism
- Abstract base classes define common interfaces
- Concrete implementations provide specific behavior

### 3. Extensibility
- Easy to add new exam types (CAT, NEET, etc.)
- Simple to introduce new question formats
- Minimal code changes required for extensions

### 4. Evaluation Strategy
- Each question type has its own evaluation logic
- String-based responses allow flexible input handling
- Standardized return format for consistency

## Expected Output

### Factory Method Pattern Output
```
Evaluated Sample_Response as per JEE Main MCQ question
Evaluated Sample_Response as per JEE Main Numerical question
Evaluated Sample_Response as per JEE Main True/False question
Evaluated Sample_Response as per JEE Main Fill-in-the-blank question
Evaluated Sample_Response as per GATE MCQ question
Evaluated Sample_Response as per GATE Numerical question
Evaluated Sample_Response as per GATE True/False question
Evaluated Sample_Response as per GATE Fill-in-the-blank question
```

### Abstract Factory Pattern Output
```
Evaluated Sample Answer as per GATE MCQ question.
Evaluated Sample Answer as per GATE Numerical question.
Evaluated Sample Answer as per GATE True/False question.
Evaluated Sample Answer as per GATE Fill-in-the-Blank question.
Evaluated Sample Answer as per JEE main MCQ question.
Evaluated Sample Answer as per JEE main Numerical question.
Evaluated Sample Answer as per JEE main True/False question.
Evaluated Sample Answer as per JEE main Fill-in-the-Blank question.
```

## Testing

The project includes comprehensive unit tests using Google Test framework:

- **Factory Method Tests**: Validate factory creation and question evaluation
- **Abstract Factory Tests**: Verify family creation and cross-compatibility
- **Integration Tests**: End-to-end workflow validation

To run tests:
```bash
# Install Google Test (Ubuntu/Debian)
sudo apt-get install libgtest-dev

# Run Factory Method tests
cd Factory_Method && make run_test

# Run Abstract Factory tests
cd Abstract_Factory_Method && make run_test_all
```

## Performance Considerations

- **Memory Management**: Explicit cleanup required for dynamically allocated objects
- **Factory Caching**: Could be implemented for frequently used question types
- **Evaluation Optimization**: String operations could be optimized for large-scale usage

## Future Enhancements

1. **Additional Exam Types**: Support for CAT, NEET, UPSC, etc.
2. **Database Integration**: Persistent storage for questions and results
3. **Web Interface**: REST API for remote question generation
4. **Advanced Question Types**: Paragraph-based, diagram-based questions
5. **Scoring System**: Automated evaluation with scoring algorithms
6. **Configuration Management**: External configuration for question parameters

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-exam-type`)
3. Implement your changes following the existing patterns
4. Add appropriate unit tests
5. Submit a pull request with detailed description

## License

This project is part of an academic assignment for Software Architecture and Design Patterns course.

## Author

Created as part of SADP Assignment 1, demonstrating practical implementation of Factory and Abstract Factory design patterns in C++.

---

*This implementation serves as an educational example of how design patterns can be applied to real-world scenarios like exam management systems.*