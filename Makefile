FLAGS = -Wall -ansi -std=c99 -lm

all: dsp.c
	gcc dsp.c -o dsp $(FLAGS)
	./dsp
