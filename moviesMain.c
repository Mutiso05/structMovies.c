#include <stdio.h>
#include "movie.h"

int main(){
 struct Movie movies [10];

 for (int i=0; i<10; i++){
 	printf ("Input details for movies %d: \n", i+1);
 	inputMovies (movies [i]);
 }

 for (int i=0;i<10; i++){
 	printf ("Details of Movies %d: \n", i+1);
 	displayMovies (movies[i]);
 }

 return 0:
}