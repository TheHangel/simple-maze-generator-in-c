#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 12

// * = mur

void afficherMaze(char a[SIZE][SIZE]){
    for (int ligne = 0; ligne < SIZE; ++ligne) {
        for (int colonne = 0; colonne < SIZE; ++colonne)
        {
            printf("%2c",a[ligne][colonne]);
        }
        printf("\n");
    }
}

void genererMaze(char maze[SIZE][SIZE])
{
    int b = 0, a = 0;
	
	for (a = 0; a != SIZE; a++) {
		
		for (b = 0; b != SIZE; b++ ) {

			if ((a == 0) || (a == SIZE-1) || (b == SIZE-1) || (b == 0)){
				maze[a][b] = '*';
				int r = rand() % 4 + 1;
				if(r == 1){
					maze[a][b] = '.';
				}
			}
			else{
				
				int r = rand() % 3 + 1;
				
				if(r == 1){
					maze[a][b] = '*';
				}
				else{
					maze[a][b] = ' ';
				}
			}
		}
	}
	afficherMaze(maze);
}

int main(void)
{
    srand(time(NULL));
    
    char maze[SIZE][SIZE];
    genererMaze(maze);
    
    return 0;
}




