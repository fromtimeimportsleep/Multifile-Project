# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++23

# Source files
SRCS = main.cpp Person.cpp Student.cpp

# Object files
OBJS = main.o Person.o Student.o

# Target binary
TARGET = class_demo

# Default rule
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compilation rules with header dependencies
main.o: main.cpp Person.h Student.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -c Person.cpp

Student.o: Student.cpp Student.h Person.h
	$(CXX) $(CXXFLAGS) -c Student.cpp

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
