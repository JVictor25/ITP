#include <stdio.h>
int main(int argc, char const *argv[])
{
    double nota1, nota2, nota3, notaf, media;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    media = ((nota1+nota2+nota3)/3);
    if (media>=7.0)
    {printf("Você está aprovado!");}
    else{
       if (media<3){
       printf("Nos veremos novamente semestre que vem 0_0");}
       else{
          if (((media>=5) && (nota1>=3)) && ((nota2>=3) && (nota3>=3)))
          {printf("escapou fedendo!");}
          else{
              printf("Ficou para reposição\n");
              scanf("%lf", &notaf);
              if (nota1>notaf && nota2>notaf && nota3>notaf)
              {printf("Lhe dou meio ponto, ops!! quer dizer: nos veremos novamente semestre que vem  :~~~~");}
              else{
                 if ((nota1<=nota2)&&(nota1<=nota3)&&(nota1<=notaf))
                     {media = ((notaf+nota2+nota3)/3);
                     if ((media>=7.0)||((media>=5)&&(notaf>=3)))
                         {printf("Passou na recuperação!");}
                     else
                         {printf("Lhe dou meio ponto, ops!! quer dizer: nos veremos novamente semestre que vem  :~~~~");}}
              
                 if ((nota2<=nota1)&&(nota2<=nota3)&&(nota2<=notaf))
                     {media = ((nota1+notaf+nota3)/3);
                     if ((media>=7.0)||((media>=5)&&(notaf>=3)))
                         {printf("Passou na recuperação!");}
                     else
                         {printf("Lhe dou meio ponto, ops!! quer dizer: nos veremos novamente semestre que vem  :~~~~");}}
              
                 if ((nota3<=nota2)&&(nota3<=nota1)&&(nota3<=notaf))
                     {media = ((nota1+nota2+notaf)/3);
                     if ((media>=7.0)||((media>=5)&&(notaf>=3)))
                          {printf("Passou na recuperação!");}
                     else
                          {printf("Lhe dou meio ponto, ops!! quer dizer: nos veremos novamente semestre que vem  :~~~~");}}
              }
              
}}}
return 0;
}