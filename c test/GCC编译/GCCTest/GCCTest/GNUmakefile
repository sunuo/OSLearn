VPATH=assistant
INC = -I assistant
ALLOBJ=*.o

EXE:$(ALLOBJ)
	gcc $(ALLOBJ) -o EXE
	
main.o:main.c
	gcc -c $< $(INC) -o $@
%.o:%.c
	gcc -c $< -o $@

.phony:clean
clean:
	rm main.o HelpOne.o EXE