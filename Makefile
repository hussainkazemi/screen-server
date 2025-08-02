CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = screen-server
SOURCES = src/main.cpp

build: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o

all: clean build run