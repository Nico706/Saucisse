args = -g -Wall -Wextra

all: test

# linker
test: main.o Matrice.o Vecteur3d.o
	g++ -Wall $^ -o $@

#compil fichier objet
%.o: %.cpp %.h
	g++ $(args) -c -o $@ $<

%.o: %.cpp
	g++ $(args) -c -o $@ $<

clean:
	rm -f *.o test
