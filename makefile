bin/programa : src/main.cpp src/memoria.cpp
	c++ src/main.cpp src/memoria.cpp -o bin/programa -I include

run : bin/programa
	./bin/programa