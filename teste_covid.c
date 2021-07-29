# teste-covid
// Exercício feito em aula para teste de estrutura condicional e de repetição na linguagem C. UVA - Sistemas de Informação.

#include <stdio.h>
#include <stdlib.h>
/* 
Problema: Foi realizada uma pesquisa com 128 participantes, 
onde foi coletado os seguintes dados:
- Idade:
- Sexo:
- Já teve sintomas do coronavirus:
- Se sim: por quantos dias ?
- Fez o teste?
Resultado? 
---------------------------
Quantas pessoas entrevistadas são do sexo Masculino?
Media de idade que tiveram sintomas?
percentual de pessoas testaram positivo?
percentual de pessoal acima de 60 anos positivo
quantidade de pessoas com menos de 5 anos que teve sintomas


*/


int main() 
{
	int idade, sexo, sintomas, dias_sintomas, teste, resultado, i, qtdMasc=0, qtdFem=0 ;
	int somaIdade=0, qtdIdSim=0, somaSintomas=0, qtdSintomas=0, qtdMenor5=0;
	int somaTeste=0, qtdTeste=0, qtdPositivo=0, qtdIdoso=0, qtdNTeste=0;
	int totalDias=0, qtdMediaDias=0, somaDiasIdoso=0, qtdDiasIdoso=0;
	
for ( i = 0 ; i<5 ; i ++)
{
	printf ("\n----Pesquisa sobre Coronavirus no Municipio do Rio de Janeiro----");
	printf ("\n-----------Pesquisa feita com 5 pessoas, por telefone -----------\n");
	printf ("\n-------------------- Entrevistado Nr %d de 5 ---------------------\n", i+1) ;
	
	printf ("\nQual a sua idade? ") ;
		scanf ("%d", &idade) ;
	printf ("Qual seu sexo? 1- Masculino ou 2-Feminino: ") ;
		scanf ("%d", &sexo) ;
	printf ("Ja teve sintomas do Coronavirus? 1-Sim ou 2-Nao: ") ;
		scanf ("%d", &sintomas) ;
		
		if ( sexo == 1 ) 
			{
			qtdMasc++;
			}
		else 
			{
			qtdFem++;
			}

	  		if (sintomas == 1) 
			  {
			  	somaIdade = somaIdade + idade ;
			  	qtdIdSim++;
			  	
			  	somaSintomas = somaSintomas + sintomas ;
				qtdSintomas++;
				
				if (idade < 5) ;
				{ 
				qtdMenor5++ ;
				} 
				 
	  			printf ("Por quantos dias teve os sintomas? ");
	  				scanf ("%d", &dias_sintomas) ;
	  				
					totalDias = totalDias + dias_sintomas ;	
					qtdMediaDias++;
					
					if ( idade>=60)
					{
					somaDiasIdoso = somaDiasIdoso + dias_sintomas ;
					qtdDiasIdoso++;
					}
	  				
	  			printf ("Ja realizou o teste? 1-Sim ou 2-Nao: ") ;
	  				scanf ("%d", &teste) ;
	  				
	  				if (teste == 1 )
					   {
					   	qtdTeste++;
					   	
						printf ("Qual foi o resultado do teste? 1-Positivo ou 2-Negativo ");
					  		scanf ("%d", &resultado);
							  if ( resultado == 1 )	
							  {
							  	qtdPositivo++;
							  	if (idade > 60) ;
							  	{ 
								  qtdIdoso++;
							  	
							  	
								  
								}
							  		
							  	printf ("\nObrigado pela participacao e cuide-se! Procure ficar em casa, respeitando o isolamento.\n") ;
							  }
						
							  else 
							  	
							  	printf ("\nObrigado pela participacao. Se tiver sintomas novamente, procure uma Unidade de Pronto Atendimento.\n") ;
					   }
					else
						if (teste == 2) 
						{
							qtdNTeste++;
						   printf ("\nObrigado pela participacao. E procure uma Unidade de Pronto Atendimento para possivel realizacao do teste. \n");
						}
					    		    
				}
	  		else
  			 printf("\nObrigado pela participacao! Fique em casa e use mascara. Caso tenha sintomas, procure uma Unidade de Pronto Atendimento.\n") ;
  		printf("\n----------------------------------------------------------\n") ;		

}	

	printf("\n-------------- Resultados da pesquisa --------------") ;
	printf("\nA quantidade de pessoas entrevistadas foi: %d", i) ;
	printf("\nQuantidade de pessoas entrevistadas que apresentaram sintomas: %d", qtdSintomas);
	printf("\nQuantidade de pessoas entrevistadas que apresentaram sintomas e realizaram o teste: %d", qtdTeste);
	printf("\nQuantidade de pessoas que testaram positivo: %d", qtdPositivo) ;
	printf("\nPercentual de pessoas entrevistadas que testaram positivo: %d %%", qtdPositivo * 100 / i );
	printf("\nPessoas do sexo Masculino entrevistadas: %d", qtdMasc  ) ;
	printf("\nPessoas do sexo Feminino entrevistadas: %d", qtdFem );
	printf("\nMedia de idade das pessoas que apresentaram sintomas: %.d anos", somaIdade/qtdIdSim);  
	printf("\nQuantidade de pessoas menores que 5 anos que apresentaram sintomas: %d", qtdMenor5 );
	printf("\nPercentual de pessoas acima de 60 anos que testaram positivo: %.d  %%", qtdIdoso * 100 / i );
	printf("\nMedia de dias do idoso com sintomas: %.d ", somaDiasIdoso/qtdDiasIdoso);
	printf("\nQuantidade de pessoas que tiveram sintomas, mas nao realizaram o exame: %d", qtdNTeste) ;
	printf("\nMedia de dias com sintomas: %.d ", totalDias/qtdMediaDias);  

	printf("\n--------------------------------------------------------") ;
	


return 0;
}
