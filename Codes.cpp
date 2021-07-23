#include <iostream.h>
#include <conio.h>

main ()
{
unsigned int sayi, taban, indis=0;
char sonuc [255]="";
cout<<"onluk sayi sisteminde pozitif tam sayi giriniz:";
cin>>sayi;
cout<<"hangi tabanda yazilmasini istersiniz:";
cin>>taban;
cout<<"onluk tabandaki ("<<sayi<<") sayisi "<<taban<<" tabaninda (";
while(sayi>0)
{
if ((sayi%taban)>9)
		sonuc[indis++]=char((sayi%taban)+55);
   else
		sonuc[indis++]=char((sayi%taban)+48);
  sayi/=taban;

}
cout<<strrev(sonuc)<<") seklinde yazilir."<<endl;

getch();
}

