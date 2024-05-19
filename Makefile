# Define the compiler
CXX = g++

# Define compiler flags
CXXFLAGS = -Wall -std=c++11

# Define the list of source files
SRCS = main.cpp Game.cpp Snake.cpp Textbox.cpp Window.cpp World.cpp EventManager.cpp

# Define the list of object files
OBJS = $(SRCS:.cpp=.o)

# Define the target executable
TARGET = app

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) -lsfml-graphics -lsfml-window -lsfml-system

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
