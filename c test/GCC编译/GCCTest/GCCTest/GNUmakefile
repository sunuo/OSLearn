VPATH=assistant
INC = -I assistant
ALLOBJ=*.o

EXE:main.o HelpOne.o
	gcc $^ -o EXE

%.o:%.c
	gcc -c $(INC) $< -o $@

.phony:clean
clean:
	rm main.o HelpOne.o EXE