//Inclui a biblioteca stdio.
#include<stdio.h>
 
 
//Criamos uma função denominada couting_sort que tem 3 parâmetros
//um vetor inteiro "a", o tamanho do vetor n, e o valor máximo do vetor denominado 
//como inteiro max.
void counting_sort(int a[],int n,int max)
{
	//declaramos um vetor chamado de count para ser nosso contador, o mesmo irá
	//armazenar o número de ocorrências de cada valor.
     int count[50]={0},i,j;
    
    //percorre nosso vetor "a" e incrementa o elemento correspondente no array count,
    //ele conta o número de ocorrências de cada valor no array a.
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;
      
      //imprime o resultado final na tela.
     printf("\nSaida:");
    
    
    //Percorre o vetor count e imprime o valor de cada elemento,
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       printf("%d ",i);
}
 
 
 //define a função main do programa.
int main()
{
	
	//Declara e cria as variaveis, a, n, i e max,
	//pergunta a quantidade de numeros que deseja ordenar, e pede os mesmos em seguida.
    int a[50],n,i,max=0;
    printf("Digite o numero de elementos que deseja ordenar:");
    scanf("%d",&n);
    printf("\nDigite os elementos:");

    //percorre o array a.              
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);
     if(a[i]>max)
      max=a[i];
    }
    
    
    //chama a função couting_sort para ordenar os vetores, e em seguida mostra o resultado.
    counting_sort(a,n,max);
    return 0;
}
