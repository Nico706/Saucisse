args = -g -Wall -Wextra

all: test

# linker
test: main.o complexe.o poly2deg.o
	g++ -Wall $^ -o $@

#compil fichier objet
%.o: %.cpp %.h
	g++ $(args) -c -o $@ $<

%.o: %.cpp
	g++ $(args) -c -o $@ $<

clean:
	rm -f *.o test
