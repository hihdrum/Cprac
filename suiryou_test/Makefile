all: suiryou

suiryou : main.o suiryou.o
	gcc -Wall main.o suiryou.o -o suiryou

main.o : main.c suiryou.h
	gcc -Wall -c main.c

suiryou.o : suiryou.c suiryou.h
	gcc -Wall -c suiryou.c

clean :
	rm -rf a.out *.o suiryou
