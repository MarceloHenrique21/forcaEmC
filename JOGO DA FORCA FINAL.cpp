#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>




void forca(int progresso){

     if(progresso==0){
                   
    printf("                          BEM VINDO AO JOGO DA FORCA");
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |                  \n");
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");   
    
                      }else if (progresso==1){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");   
                       }else if (progresso==2){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |       |         \n" );
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");  
	
	                 }else if (progresso==3){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |      -|         \n" );
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");  
                   
                      }else if (progresso==4){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |      -|-         \n" );
	printf(" |                 \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");  
                   
                     }else if (progresso==5){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |      -|-          \n" );
	printf(" |      /          \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");  
	
	                  }else if (progresso==6){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |      -|-          \n" );
	printf(" |      / \         \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	printf("\n\n");  
	
	                   }else if (progresso==6){
      
    printf("\n\n");             
    printf("  _______           \n");
	printf(" |/      |          \n");
	printf(" |       0          \n");
	printf(" |       -         \n");
	printf(" |      -|-          \n" );
	printf(" |      / \         \n" );
	printf(" |                 \n" );
	printf(" |                  \n");
	printf("_|___               \n");
	
	printf("                                    VOCE PERDEU");
	printf("\n\n");  
	
	            
                   
                   }
 }


// ------
int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	
         int erros = 0;
         char palavra[15];
         char palavraAcertos [15];
         char letra;
         int n,i;
     
     
         printf("                    OLÁ JOGADOR, ESCOLHA O QUE QUER FAZER");	
         printf("\n\n\n\n");
         printf("                        1- JOGAR \n");
         printf("                        2- RANK \n");
         printf("                        3- SCORE \n");
         printf("                        4- CREDITOS\n");
         printf("                        5- SAIR\n");
         printf("\n\n");
         
         
         printf("                                ESCOLHA UMA OPÇÃO: ");	
         scanf("%d", &n);
 
    switch (n){
        
        
    case 1: 
         system("cls"); 
         
        
         printf("                       Digite uma palavra SEM ESPAÇO: ");
         scanf("%s", &palavra);
         printf("              Voce digitou: %s", palavra);
         printf("\n\n\n\n\n");
         system("cls"); 
        
         printf("\n\n");
         printf("             A PALAVRA POSSUI %i LETRAS", strlen(palavra));
         printf("\n\n\n\n\n");
         
        // forca sem ter digitado nada
       
        
        
                 
        strcpy(palavraAcertos, palavra);
       
        palavraAcertos[strlen(palavraAcertos)-1]='\0';
        
        for ( i=0;i<strlen(palavraAcertos); i+=1){
            
          
            palavraAcertos[i]='_';
        
            }
            
             forca (0);
          //   puts(palavraAcertos);  
            
    
        
        while(1){    
                  
                 printf("letras acertadas: ");
                // puts(palavraAcertos);
                 //printf("\n\n\n\n");
                 
                 for (i=0; i<strlen(palavraAcertos); i+=1 ){
                   
                     printf("%c ", &palavraAcertos[i]);
                     } 
                    
                    
                  printf("\n\ndigite uma letra: ");
                  scanf("%c", &letra);
                  printf("\n\n");
                  
                  for(i=0; i<strlen(palavraAcertos); i+=1){
                           
                         if(letra=palavraAcertos[i]){
                                                     
                           palavraAcertos[i]=letra;
                            
                               }  
                             }
                  
                  
               break;
               
             
                
                
}      

                       
        
       // system("cls"); 
       
       
        break;
              
            
   case 2: 
        system("cls"); 
        printf("      AQUI ESTA O RANKING DOS JOGADORES:");
        printf("\n\n\n\n\n");
        break;
        
          
   case 3: 
        system("cls");
        printf("                            AQUI ESTA O SEU SCORE: ");
        printf("\n\n\n\n\n");
        break;
        
            
   case 4: 
        system("cls"); 
        printf("      JOGO FEITO POR:  EU :)");
        printf("\n\n\n\n\n");
        break;
        
        
   case 5: 
        system("cls"); 
      	system("pause");
        break;
        
        
 
        default: 
                 printf("\n\n\n\n\n");
                 
                 printf("                     DIGITE UM NUMERO VALIDO!!!!!!");
                 printf("\n\n\n\n\n");
        
        }
  


          // system("cls");
		system("pause");
	return (0);
}
