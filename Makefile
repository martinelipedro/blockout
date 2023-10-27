SOURCES = $(shell find . -type f -name '*.cpp')
HEADERS = $(shell find . -type f -name '*.hpp')
OBJECTS = $(SOURCES:.cpp=.o)

EXE_NAME = blockout

.PHONY: all clean exe

%.o: %.cpp
	g++ -c $< -o $@

all: $(OBJECTS) $(HEADERS)
	g++ $(OBJECTS) -o $(EXE_NAME)

clean:
	rm -rf $(OBJECTS) $(EXE_NAME)

exe: all
	rm -rf $(OBJECTS)
