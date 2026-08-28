#include<stdio.h>
#include<stdlib.h>

int main(){

    char alfabeto; // variavel para caracteres 
    
     printf("Informe a letra do alfabeto: ");
     scanf("%c", &alfabeto); // Armazenando letra

     if (alfabeto == 'a' || alfabeto == 'A') // Parte que abre a variavel
        {
        printf("%c de amor", alfabeto); // Se for informado a leta A
    } 
        else if(alfabeto == 'B' || alfabeto == 'b')
        { 
          printf("%C de baixinho", alfabeto); // se for informar a letra B
    }   
        else if (alfabeto == 'c' || alfabeto == 'C')
        {
          printf("%c de coração", alfabeto); // se for informar a letra C
    }
        else if (alfabeto == 'd' || alfabeto == 'D')
        {
          printf("%c de docinho ", alfabeto); // se for informar a letra D
    }
        else if (alfabeto == 'e' || alfabeto == 'E')
        {
          printf("%c de escola", alfabeto);
    }
        else if(alfabeto == 'f' || alfabeto == 'F')
        {
          printf("%C de feijão", alfabeto);
    }
        else if (alfabeto ==  'g' || alfabeto == 'G')
        {
          printf("%c  de gente", alfabeto);
    }
        else if (alfabeto ==  'h' || alfabeto == 'H')
        {
          printf("%c de humano", alfabeto); 
    }
        else if (alfabeto == 'i' || alfabeto == 'I')
        {
          printf("%c de igualdade", alfabeto);
    }
        else if (alfabeto == 'j' || alfabeto == 'J')
        {
          printf("%c juventude", alfabeto);
    }
        else if (alfabeto == 'l' || alfabeto == 'L')
        {
          printf("%c liberdade", alfabeto);
    }
        else if (alfabeto == 'm' || alfabeto == 'M')
        {
          printf("%c molecagem", alfabeto);
    }
        else if (alfabeto == 'n' || alfabeto == 'N')
        {
          printf("%c ", alfabeto);
    }
        else if (alfabeto == 'o' || alfabeto == 'O')
        {
          printf("%c obrigado", alfabeto);
    }
        else if (alfabeto == 'p' || alfabeto == 'P')
        {
          printf("%c proteção", alfabeto);
    }
        else if (alfabeto == 'q' || alfabeto == 'Q')
        {
          printf("%c de quero-quero", alfabeto);
    }
        else if (alfabeto == 'r' || alfabeto == 'R')
        {
          printf("%c de riacho", alfabeto);
    }
        else if (alfabeto == 's' || alfabeto == 'S')
        {
          printf("%c saudade", alfabeto);
    }
        else if (alfabeto == 't' || alfabeto == 'T')
        {
          printf("%c de terra", alfabeto);
    }
        else if (alfabeto == 'u' || alfabeto == 'U')
        {
          printf("%c de universo", alfabeto);
    }
        else if (alfabeto == 'v' || alfabeto == 'V')
        {
          printf("%c de vitoria", alfabeto);
    }
        else if (alfabeto == 'x' || alfabeto == 'X')
        {
          printf("%c o que que é? É Xuxa", alfabeto);
    }
        else if (alfabeto == 'z' || alfabeto == 'Z')
        {
          printf("%c é zum, zum, zum, zum", alfabeto);
    }
     else
       {
       printf("A de amor\nB de baixinho\nC de coração\nD de docinho\nE de escola\nF de feijão\nG de gente\nH de humanoI de igualdade\nJ de juventude\nL de liberdade\nM de molecagem\nN de natureza\nO de obrigado\nP de proteção\nQ de quero-quero\nR de riachoS de saudade\nT de terra\nU de universo\nV de vitória\nX o que que é? É Xuxa!\nZ é zum-zum-zum-zum-zum");
    } // Fechamento das variaveis

    
        
    
     
     

     
     
     return 0;
    }
