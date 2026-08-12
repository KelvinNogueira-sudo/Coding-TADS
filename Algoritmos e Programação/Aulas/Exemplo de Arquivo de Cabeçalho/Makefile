SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := meuPrograma

all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)