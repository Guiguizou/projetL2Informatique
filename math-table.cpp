#include <cstdio>

int main(){
  char opera;
  int nrow = 0, ncol = 0, taille = 0, value = 0, espace = 0;

  //opérateur
  do{
    printf("operator: ");
    scanf("%c", &opera);
    while(getchar() != '\n');
  }while(opera != '+' && opera != '-' && opera != '*' && opera != '/' && opera != '%');

  //lines
  do{
    printf("number of lines: ");
    scanf("%d", &nrow);
    while(getchar() != '\n');
  }while(nrow <= 0);

  //columns
  do{
    printf("number of columns: ");
    scanf("%d", &ncol);
    while(getchar() != '\n');
  }while(ncol <= 0);

  

  //Entete de la table
  printf("%c |", opera);
  
  taille = (ncol+nrow)/10 + 1;
  
  //Table
  switch (opera)
  {
  case '+':
    //Entete
    for(int i = 0; i < ncol; i++){ 
      printf("%d", i);
      if(i>10)
        espace = taille -1;
      else
        espace = taille;
      for(int i = 0; i < espace; i++) printf(" ");
    }
    printf("\n");
    for(int i = 0; i <= 5+(ncol-1)*(taille+1); i++) printf("-");
    printf("\n");

    //Corps
    for(int j = 0; j< nrow; j++){
      printf("%d", j);
      if(j>=10)
        printf("|");
      else
        printf(" |");
      
      for(int i = 0; i < ncol; i++){
        value = j + i;
        printf("%d", value);
        if(value<10)
          espace = taille;
        else
          espace = taille - 1; 
        for (int i = 0; i < espace; i++) printf(" ");
      }
      printf("\n");
    }
    break;

  case '-':
    //Entete
    for(int i = 0; i < ncol; i++){ 
      printf("%d", i);
      if(i>10)
        espace = taille -1;
      else
        espace = taille;
      for(int i = 0; i < espace; i++) printf(" ");
    }
    printf("\n");
    for(int i = 0; i <= 5+(ncol-1)*(taille+1); i++) printf("-");
    printf("\n");

    //Corps
    for(int j = 0; j< nrow; j++){
      printf("%d", j);
      if(j>=10)
        printf("|");
      else
        printf(" |");
      
      for(int i = 0; i < ncol; i++){
        value = j - i;
        printf("%d", value);
        if(value<=-10)
          espace = taille-2;
        else if(value>=10 || value<0)
          espace = taille-1;
        else
          espace = taille; 
        for (int i = 0; i < espace; i++) printf(" ");
      }
      printf("\n");
    }
    break;

  case '/':
    //Entete
    for(int i = 0; i < ncol; i++){ 
      printf("%d", i);
      if(i>10)
        espace = taille -1;
      else
        espace = taille;
      for(int i = 0; i < espace; i++) printf(" ");
    }
    printf("\n");
    for(int i = 0; i <= 5+(ncol-1)*(taille+1); i++) printf("-");
    printf("\n");

    //Corps
    for(int j = 0; j< nrow; j++){
      printf("%d", j);
      if(j>=10)
        printf("|");
      else
        printf(" |");
      
      for(int i = 0; i < ncol; i++){
        if(i == 0){
          printf("%s", "E");
          value = 1;
        }else{
          value = j / i;
          printf("%d", value);
          };
        if(value<=-10) 
          espace = taille-2;
        else if(value>=10 || value<0)
          espace = taille-1;
        else
          espace = taille; 

        for (int i = 0; i < espace; i++) printf(" ");
      }
      printf("\n");
    }
    break;

  case '*':
    //Entete
    for(int i = 0; i < ncol; i++){ 
      printf("%d", i);
      if(i>10)
        espace = taille -1;
      else
        espace = taille;
      for(int i = 0; i < espace; i++) printf(" ");
    }
    printf("\n");
    for(int i = 0; i <= 5+(ncol-1)*(taille+1); i++) printf("-");
    printf("\n");

    //Corps
    for(int j = 0; j< nrow; j++){
      printf("%d", j);
      if(j>=10)
        printf("|");
      else
        printf(" |");
      
      for(int i = 0; i < ncol; i++){
        value = j * i;
        printf("%d", value);
        if(value<=-10 || value>=100) 
          espace = taille-2;
        else if(value>=10 || value<0)
          espace = taille-1;
        else
          espace = taille; 
        for (int i = 0; i < espace; i++) printf(" ");
      }
      printf("\n");
    }
    break;

  case '%':
    
    break;
  
  default:
    break;
  };
  
  
  printf("\ntaille : %d\n", taille);

  printf("opérateur : %c\n", opera);
  printf("number lines : %d\n", nrow);
  printf("numbers columns : %d\n", ncol);
  printf("OK\n");
  return 0;
}