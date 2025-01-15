
CC=gcc

all: out1 out2 out3 out4 out5 out6

out1: source1.c
	$(CC) -o out1 source1.c

out2: source2.c
	$(CC) -o out2 source2.c

out3: source3.c
	$(CC) -o out3 source3.c

out4: source4.c
	$(CC) -o out4 source4.c

out5: source5.c
	$(CC) -o out5 source5.c

# Deliberately introduce an error in the compilation of out6
out6: source6.c
	$(CC) -o out6 source6.c && exit 1

clean:
	rm -f out1 out2 out3 out4 out5 out6
