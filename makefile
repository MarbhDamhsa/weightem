#             makefile for weightem
#
#
weightem: weightem.o
          gcc weightem.o -o weightem -lm
          
weightem.o: weightem.c
          gcc -c weightem.c

clean:
      rm *.o
