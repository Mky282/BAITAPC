#include <stdio.h>
#include <stdbool.h>
int count=0;
int dem=0,kq=0;
int demngay(int thang)
{
   if(thang>12)
   {
    printf("thang khong hop le");
   }else {
    if(thang == 1||thang ==3||thang ==5||thang ==7||thang ==8||thang ==10||thang ==12){
        dem=31;
    }else if(thang == 2)
    {
        dem=28;
    }else{
        dem=30;
    }
   }
   return dem;
}
void Thu(int Thu)
{
		switch(Thu)  
{  
case 0:  
printf(" Thu Sau ");  
break; 
case 1:  
printf(" Thu Nam ");  
break;  
case 2:  
printf(" Thu Tu ");  
break;  
case 3:  
printf(" Thu Ba ");  
break;  
case 4:  
printf(" Thu Hai ");  
break;  
case 5:  
printf(" Chu Nhat ");  
break;  
case 6:  
printf(" Thu Bay ");  
break;    
default:  
break;  
}
}
void Thu1(int Thu)
{
		switch(Thu)  
{  
case 0:  
printf(" Thu Sau ");  
break; 
case 6:  
printf(" Thu Nam ");  
break;  
case 5:  
printf(" Thu Tu ");  
break;  
case 4:  
printf(" Thu Ba ");  
break;  
case 3:  
printf(" Thu Hai ");  
break;  
case 2:  
printf(" Chu Nhat ");  
break;  
case 1:  
printf(" Thu Bay ");  
break;    
default:  
break;  
}
}
bool kiemtrathang(int thang)
{
    if(thang > 2)
    return true; 
    return false; 
}
bool namnhuan(int nam)
{
    if (nam % 400 == 0) 
        return true; 
    if (nam % 4 == 0 && nam % 100 != 0) 
        return true;
    return false; 
}
void tinhngaymoclon(int ngay,int thang,int nam)
{count=0;
   if(namnhuan(nam) == true){
      if(kiemtrathang(thang) == true)
    {
      for(int i = thang;i<13;i++)
      {
        count=count+demngay(i);
      }
     count=count- ngay+1;
   } else{
     for(int i = thang;i<13;i++)
      {
        count=count+demngay(i);
      }
    
     count=count+2- ngay;
   }
    }else{
       for(int i = thang;i<13;i++)
      {
        count=count+demngay(i);
      }
    
    count=count-ngay+1;  
}
}
void tinhngaymocnho(int ngay,int thang,int nam)
{
    count=0;
   if(namnhuan(nam) == true){
      if(kiemtrathang(thang) == true)
    {
      for(int i = thang;i>=1;i--)
      {
        count=count+demngay(i);
      }
     count=count-(demngay(thang)-ngay);
   } else{
      for(int i = thang;i>=1;i--)
      {
        count=count+demngay(i);
      }
    
     count=count+1-(demngay(thang)-ngay);
   }
    }else{
        for(int i = thang;i>=1;i--)
      {
        count=count+demngay(i);
      }
    
    count=count-(demngay(thang)-ngay);
}
}
void Tinhthu(int ngay1,int thang1,int nam1,int ngay,int thang,int nam)
{
   if (nam > nam1)
   {tinhngaymoclon(ngay1,thang1,nam1);
   kq=count;
for (int i=nam1+1;i<nam;i++)
{
     if(namnhuan(nam) == true){
       kq=kq+366;
    }else{
        kq=kq+365;
    }
}
tinhngaymocnho(ngay,thang,nam);
    kq=kq+count;
    kq=kq-1;
   }else if (nam < nam1)
   {
tinhngaymocnho(ngay1,thang1,nam1);
   kq=count;
for (int i=nam1-1;i>nam;i--)
{
     if(namnhuan(nam) == true){
       kq=kq+366;
    }else{
        kq=kq+365;
    }    
   }
   tinhngaymoclon(ngay,thang,nam);
    kq=kq+count;
    kq=kq-1;
   }else{
    if (thang1>thang)
    { count=0;
      for(int i =thang;i<=thang1;i++ )
      {
        count=count+demngay(i);
      }
      kq=count-ngay-(demngay(thang1)-ngay1);
    }else if(thang1<thang){count=0;
     for(int i =thang1;i<=thang;i++ )
      {
        count=count+demngay(i);
      }kq=count-ngay1-(demngay(thang)-ngay);
    }else{
      kq = ngay1-ngay;
      if(kq<1)
      {
        kq=kq*-1;
      }
    }
   }kq = kq %7;
 if(nam>nam1)
 {
Thu1(kq);
 }else{
Thu(kq);
 }
}
int main(int argc, char const *argv[])
{
Tinhthu(25,11,2022,1,4,2026);//Tinhthu(moc,dich)
 return 0;
}