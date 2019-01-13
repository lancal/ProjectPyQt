TARGET = sip
OFILES = main.o transform.o gencode.o extracts.o export.o type_hints.o heap.o parser.o lexer.o
HFILES = sip.h parser.h

CC = cc
CXX = c++
LINK = c++
CPPFLAGS = -DNDEBUG -I.
CFLAGS = -pipe -Os -Wall -W
CXXFLAGS = -pipe -Os -Wall -W
LFLAGS = -headerpad_max_install_names
LIBS = 
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/bin || mkdir -p $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/bin
	cp -f $(TARGET) $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/bin/$(TARGET)
	@test -d $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m || mkdir -p $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m
	cp -f /Users/alan/PycharmProjects/ProjectPyQt/sip-4.19.13/siplib/sip.h $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m/sip.h

clean:
	-rm -f $(TARGET)
	-rm -f main.o
	-rm -f transform.o
	-rm -f gencode.o
	-rm -f extracts.o
	-rm -f export.o
	-rm -f type_hints.o
	-rm -f heap.o
	-rm -f parser.o
	-rm -f lexer.o
