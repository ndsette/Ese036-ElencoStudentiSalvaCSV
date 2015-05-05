#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    
    int i;
    FILE *sFile;
    studente alunno;
    sFile=fopen(FNAME,"w");
    
    if(sFile!=NULL){
                    
     printf("Inserisci i dati per %d studenti\n", N);
    for(i=0; i<N; i++) {
        printf("\nInserisci il nome : ", MAX_STRLEN);
        scanf("%s", alunno.nome);
        printf("Inserisci il cognome : ", MAX_STRLEN);
        scanf("%s", alunno.cognome);
        printf("Inserisci l'eta': ");
        scanf("%d", &(alunno.eta));
        printf("Inserisci la classe : ", MAX_STRLEN);
        scanf("%s", alunno.classe);
        fprintf(sFile, "%s;%s;%d;%s\n", alunno.nome, alunno.cognome, alunno.eta, alunno.classe);   
                    
                    
                    
}

else{
       
     printf("errore nell'aperura");  
  }  
    
    return (EXIT_SUCCESS);
}
