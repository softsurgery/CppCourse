# Define the compiler
CXX = g++

# Define compiler flags (e.g., for C++17 standard, warnings, debug info)
CXXFLAGS = -std=c++17 -Wall -g

# Define the executable name
TARGET = program

# Define header files
HDRS = headers/Application.hpp headers/Colie.hpp headers/ColieEtr.hpp headers/Livreur.hpp

# Define source files
SRCS = main.cpp sources/Application.cpp sources/Colie.cpp sources/ColieEtr.cpp sources/Livreur.cpp

# Define object files (derived from source files)
OBJS = $(SRCS:.cpp=.o)

# Default target: builds the executable
all: $(TARGET)

# Rule to link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Rule to compile each .cpp file into a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target: removes generated files
clean:
	rm -f $(OBJS) $(TARGET)