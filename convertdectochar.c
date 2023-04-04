#include <stdio.h>
int temp,dem,vi,tang=1;
void demso(int so){
   switch (so)
   {
   case 0:
   printf("Khong");
      break;
   case 1:
   printf("Mot");
      break;
      case 2:
   printf("Hai");
      break;
      case 3:
   printf("Ba");
      break;
      case 4:
   printf("Bon");
      break;
      case 5:
   printf("Nam");
      break;
      case 6:
   printf("Sau");
      break;
      case 7:
   printf("Bay");
      break;
      case 8:
   printf("Tam");
      break;
      case 9:
   printf("Chin");
   break;
   default:
   printf(" so khong ho le");
      break;
   }
}
void demhang(int so){
   switch (so)
   {
   case 1:
   printf(" Muoi ");
      break;
      case 2:
   printf(" Tram ");
      break;
      case 3:
   printf(" Nghin "); 
      break;
      case 4:
   printf(" Muoi ");
      break;
      case 5:
   printf(" Tram ");
      break;
      case 6:
   printf(" Trieu ");
      break;
   default:
   printf(" ");
      break;
   }
}    
void conventDectochar(int number)
{
   while(number <= 0);
   temp = number;
   if(number == 0) dem = 1;
   while(temp != 0)
   {
   dem++;
   temp = temp / 10;
   tang=tang*10;
   } 
 
   for(int i=tang/10;i>=1;i=i/10)
   {
      vi=(number/i)%10;
      demso(vi);
      dem=dem-1;
      demhang(dem);
   }
}

int main(int argc, char const *argv[])
{
   conventDectochar(9999999);
 return 0;
}