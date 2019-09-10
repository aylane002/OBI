int main()
{
   int valor,i;
   printf("Insira um valor para verificar os seus divisores: \n");
   scanf("%d", &valor);
   for (i = 1; i < valor; i++)
   {
       if (valor%i==0)
       {
           printf("Eh devisor %d \n", i);
       }
   }
   printf("Eh divisor %d \n", valor);
   
   return 0;
}
