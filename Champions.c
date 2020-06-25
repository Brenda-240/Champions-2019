#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcion;
    
    while(opcion!=8) {
    
    printf("\n");
    printf("*************************************\n");
    printf("* ==== Resultados de Champions ==== *\n");
    printf("*                                   *");
    printf("\n* Elija una opción:                 *");
    printf("\n* 1. Octavos de final (Ida)         *");
    printf("\n* 2. Octavos de final (Vuelta)      *");
    printf("\n* 3. Cuartos de  final (Ida)        *");
    printf("\n* 4. Cuartos de final (Vuelta)      *");
    printf("\n* 5. Semifinales (Ida)              *");
    printf("\n* 6. Semifinales (Vuelta)           *");
    printf("\n* 7. Final                          *");
    printf("\n* 8. Salir.                         *\n");
    printf("*                                   *");
    printf("\n*************************************\n");
    printf("\nSu opción es: ");
    scanf("%d", &opcion);
    printf("\n");
    if(opcion==1) {
        
        printf("Octavos de final (Ida)\n");
        printf("\n");
        printf("Atlético VS Liverpool \t Goles: 1-0\n");
        printf("Borussia Dortmund VS PSG \t Goles 2-1\n");
        printf("Atalanta VS Valencia \t Goles 4-1\n");
        printf("Tottenham H. VS Leipzig \t Goles 0-1\n");
        printf("Chelsea VS Bayern Múnich \t Goles 0-3\n");
        printf("Nápoles VS Barcelona \t Goles 1-1\n");
        printf("O. Lyon VS Juventus \t Goles 1-0\n");
        printf("Real Madrid VS M. City \t Goles 1-2\n");
    } 
    if(opcion==2) {
    
        printf("Octavos de final (Vuelta)\n");
        printf("\n");
        printf("Leipzig VS Tottenham H. \t Goles 3-0\n");
        printf("Valencia VS Atalanta \t Goles 3-4\n");
        printf("Liverpool VS Atlético \t Goles 2-3\n");
        printf("PSG VS Borussia Dortmund \t Goles 2-0\n");
        printf("Juventus VS O. Lyon \t SUSPENDIDO\n");
        printf("M. City VS Real Madrid \t SUSPENDIDO\n");
        printf("Barcelona VS Nápoles \t SUSPENDIDO\n");
        printf("Bayern Múnich VS Chelsea \t SUSPENDIDO\n");   
    }
    if(opcion==3) {
    
        printf("Cuartos de final (Ida)\n");
        printf("\n");
        printf("Dortmund VS Paris\n");
        printf("Man. City VS Real Madrid\n");
        printf("Lyon VS Juventud\n");
        printf("Napoli VS Barcelona\n");
    }
    if(opcion==4) {
    
        printf("Cuartos de final (Vuelta)\n");
        printf("\n");
        printf("Dortmund VS Real Madrid\n");
        printf("Juventus VS Barcelona\n");
    }
    if(opcion==5) {
    
        printf("Semifinales (Ida)\n");
        printf("\n");
        printf("Dortmund VS Barcelona\n");
    }
    if(opcion==6) {
    
        printf("Semifinales (Vuelta)\n");
        printf("\n");
        printf("Dortmund VS Barcelona\n");
    }
    if(opcion==7) {
    
        printf("Final \n");
        printf("\n");
        printf("*** Campeón ***\n");
        printf("Barcelona\n");
    }
    if(opcion==8) {
    printf("Gracias, vuelva pronto.\n");
    }
  }
}