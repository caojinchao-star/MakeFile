TARGET=xserver
OBJS=xserver.o

CXXFLAGS= -std=c++11 -I../xthread

#库的路径
LDFLAGS=-L../xthread -lpthread

#引用的库，去掉前面的lib和后面的so
LIBS=-lxthread

$(TARGET):$(OBJS)
	$(CXX) $^ -o $@ $(LDFLAGS) $(LIBS)


PHONY:clean
clean:
	$(RM) $(OBJS) $(TARGET)