#include <stdio.h>
#include <math.h>
 float d, dtMAB, dtMAC, dtMBC, dtABC;
typedef struct{
    int x;
    int y;
}DIEM;
typedef struct{
   DIEM A;
      DIEM B;
         DIEM C;
            DIEM M;
}TAMGIAC;
float tinhDienTich(float xA, float yA, float xB, float yB, float xC, float yC)
{
    return 0.5*fabs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
}

void nhap(TAMGIAC ABC)
{
    printf("NHAP DIEM Ax: " );
    scanf("%d",&ABC.A.x);  
    printf("NHAP DIEM Ay: " );
    scanf("%d",&ABC.A.y);  
    printf("NHAP DIEM Bx: " );
    scanf("%d",&ABC.B.x);  
    printf("NHAP DIEM By: " );
    scanf("%d",&ABC.B.y);  
    printf("NHAP DIEM Cx: " );
    scanf("%d",&ABC.C.x);  
    printf("NHAP DIEM Cy: " );
    scanf("%d",&ABC.C.y);
    printf("NHAP DIEM Mx: " );
    scanf("%d",&ABC.M.x);  
    printf("NHAP DIEM My: " );
    scanf("%d",&ABC.M.y); 
    double AB,BC,CA;

    AB=(double)sqrt(pow((double)(ABC.B.x-ABC.A.x),2)+pow((double)(ABC.B.y-ABC.A.y),2));
    BC=(double)sqrt(pow((double)(ABC.C.x-ABC.B.x),2)+pow((double)(ABC.C.y-ABC.B.y),2));
    CA=(double)sqrt(pow((double)(ABC.A.x-ABC.C.x),2)+pow((double)(ABC.A.y-ABC.C.y),2));
 printf(" %f", AB);
  printf(" %f",BC);
   printf(" %f", CA);
      if((AB*AB<BC*BC+CA*CA) && (BC*BC<AB*AB+CA*CA) && (CA*CA<BC*BC+AB*AB)) {

                   printf("\nDay la ba canh cua tam giac");
                   dtMAB = tinhDienTich(ABC.M.x, ABC.M.y, ABC.A.x,ABC.A.y,ABC.B.x,ABC.B.y);
    dtMAC = tinhDienTich(ABC.M.x, ABC.M.y, ABC.A.x,ABC.A.y, ABC.C.x,ABC.C.y);
    dtMBC = tinhDienTich(ABC.M.x, ABC.M.y,ABC.B.x,ABC.B.y, ABC.C.x,ABC.C.y);
    dtABC = tinhDienTich(ABC.A.x,ABC.A.y, ABC.B.x,ABC.B.y, ABC.C.x,ABC.C.y);
    d = dtMAB+dtMAC+dtMBC-dtABC;
    if(d>0)
    {
        printf("\nM nam ngoai tam giac ABC");
    }
    else if(dtMAB==0 || dtMAC==0 || dtMBC==0)
    {
        printf("\nM nam tren canh cua tam giac ABC");
    }
    else
    {
        printf("\nM nam trong tam giac ABC");
    }
    
          } else

                   printf("\nDay khong phai la ba canh cua tam giac");
    
}
int main(int argc, char const *argv[])
{
    TAMGIAC ABC;
    nhap(ABC);
    return 0;
}
