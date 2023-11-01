void sort(int *tabela,int len){
   unsigned long int rekursja1=0;
   unsigned long int petle1=0;
   int indexy[len];
   int index=0;
   int random;
   long unsigned int helper=0;
   for (int x=0; x<len; x++) {
      petle1++;
      random=rand()%len;
      if ((helper & (1<<(random)))) {
         x--;
         continue;
      }
      helper+=(1<<(random));
      indexy[index]=random;
      index++;
      if (index > 1 && *(tabela+indexy[index-2]) > *(tabela+indexy[index-1])) {
         helper=0;
         rekursja1++;
         index=0;
         x=-1;
         continue;
      }
   }
int main(){
   srand(time(NULL));
   int tabela[]={12,33,2,0,-3,-12,7,128,34,19,-1,-51,-2};
   sort(&tabela[0],sizeof(tabela)/sizeof(tabela[0]));
}
