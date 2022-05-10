TARGET=libxthread.so
OBJS=xthread.o

LDFLAGS=-shared

CXXFLAGS=-fPIC -std=c++11


$(TARGET):$(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@


PHONY:clean

clean:
	$(RM) $(TARGET) $(OBJS)