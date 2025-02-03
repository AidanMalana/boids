boids:
	echo "Compiling boids"
	gcc -Wall main.c -lraylib -o bin/boids
clean:
	rm -f bin/game
