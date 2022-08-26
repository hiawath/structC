CC=gcc
CPP=g++
CFLAGS=-g -Wall
InsertOBJS=main.o InsertLinkedList.o
InsertTARGET=insert.out
LinkedOBJS=main.o linkedList.o
LinkedTARGET=linked.out

GOBJS=gtest.o InsertLinkedList.o
GTARTGET=gtest.out


insert:$(InsertTARGET)

linked:$(LinkedTARGET)

$(InsertTARGET): $(InsertOBJS)
	$(CC) -g -o $@ $(InsertOBJS)
$(LinkedTARGET): $(LinkedOBJS)
	$(CC) -g -o $@ $(LinkedOBJS)


clean:
	rm -f *.o
	rm -f *.out
gtest: $(GTARTGET)


$(GTARTGET): $(GOBJS)
	$(CPP) -d -o $@ $(GOBJS)  -pthread -lgtest -std=c++11
	


