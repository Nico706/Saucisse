args = -g -Wall -Wextra

all: test

# linker
test: main.o Set_Of_Integer.o Set_chaine.o
	g++ -Wall $^ -o $@

#compil fichier objet
%.o: %.cpp %.h
	g++ $(args) -c -o $@ $<

%.o: %.cpp
	g++ $(args) -c -o $@ $<

clean:
	rm -f *.o test
