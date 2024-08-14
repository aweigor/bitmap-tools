CFLAGS	= -Wall -W -Werror -O2 -std=c++17
LDFLAGS	=

HEADERS	= lib/reader.h \
					lib/object.h

OBJS	= main.o \
				lib/reader.o \
	  		lib/object.o
	  
EXE	= bmic

$(EXE): $(OBJS) $(HEADERS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

# dependencies 
$(OBJS): $(HEADERS) Makefile	

.cpp.o:
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	-@rm -f $(EXE) $(OBJS)

