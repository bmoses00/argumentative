all: parse_args.c
	gcc parse_args.c

run:
	./a.out "ls -a -l"

clean:
	rm a.out
	rm parse_args.o
