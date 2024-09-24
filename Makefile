CXX = g++
CXXFLAGS = -Wall -std=c++17
LIBS = -lssl -lcrypto

OBJS = main.o class.o user.o manager.o supervisor.o items.o
TARGET = payline

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LIBS) -o $(TARGET)

main.o: main.cpp main.h
	$(CXX) $(CXXFLAGS) -c main.cpp

class.o: class.cpp main.h
	$(CXX) $(CXXFLAGS) -c class.cpp

user.o: user.cpp main.h
	$(CXX) $(CXXFLAGS) -c user.cpp

manager.o: manager.cpp main.h
	$(CXX) $(CXXFLAGS) -c manager.cpp

supervisor.o: supervisor.cpp main.h
	$(CXX) $(CXXFLAGS) -c supervisor.cpp

items.o: items.cpp main.h items.hpp
	$(CXX) $(CXXFLAGS) -c items.cpp

clean:
	rm -f $(OBJS) $(TARGET)
