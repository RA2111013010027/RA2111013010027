#include <stdio.h>
#include<stdio.h>
int rate( int);
void main()
{
 int u,d,r,l,k,b,t,m,h,rph,ra,a;
 
 printf("\n VECHILE RENTAL MANAGEMENT SYSTEM\n");
 printf("\n ----------------------- \n");
 printf("\n Press 1 for TWO WHEELER\n");
 printf("\n Press 2 for FOUR WHEELER");
 printf("\n ---------------------------- \n");
 printf("\n Press any Option: \n");
 scanf("%d", &k); 
 switch(k)
 {
 case 1:
 printf("\n You have chosen Two Wheeler \n");
 printf("\n Press 1 for BICYCLE \n");
 printf("\n Press 2 for MOTOCYCLE \n");
 printf("\n ---------------------------- \n");
 printf("\n Press any Option: \n");
 scanf("%d", &t);
 switch(t)
 { 
 case 1:
 printf("\n You have chosen BICYCLE \n");
 printf("\n Press 1 for  STANDARD CYCLE, 2 for GEAR CYCLE \n");
 scanf("%d", &b);
 switch(b)
 { case 1: 
 printf("\n You have selected standard cylce  \n");
 rph =10;
 ra=rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 case 2:
 printf("\n You have selected GEAR CYCLE  \n");
 rph =20;
 ra=rate(rph);
 printf(" Total cost of rent %d",ra);
 break; 
 }
 break;
 case 2:
 printf("\n You have chosen MOTOR CYCLE \n");
 printf("\n Press 1 for STANDARD BIKE, 2 for  SPORTS BIKE \n");
 scanf("%d", &m);
 switch(m)
 { case 1: 
 printf("\n You have selected standard BIKE  \n");
 rph =60;
 ra=rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 case 2:
 printf("\n You have selected SPORTS BIKE  \n");
 rph =100;
 ra= rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 }
 break;
 }
 break;
 
 case 2:
 printf("\n You have chosen FOUR WHEELER \n");
 printf("\n Press 1 for Deluxe Vehicles \n");
 printf("\n Press 2 for Long or Road Trip Vehicles \n");
 printf("\n Press 3 for Luxury Vehicle \n");
 printf("\n ---------------------------- \n");
 printf("\n Press any Option: \n");
 scanf("%d", &u);
 switch(u)
 {
 case 1:
 
 printf("\n Deluxe Vehicle Available are \n");
 printf("\n Maruti ZEN, OMNI, V.POLO \n");
 printf("\n ------------------------------ \n");
 printf("\n Press 1 for ZEN, 2 for OMNI, 3 for POLO \n");
 scanf("%d", &d);
 switch(d)
 {
 case 1:
 printf("\n You have selected ZEN | \n");
 rph =150;
 ra= rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 case 2:
 printf("\n You have selected OMNI  \n");
  rph =200;
 ra= rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 case 3:
 printf("\n You have selected Volkswagen Polo \n");
 rph =300;
 ra=rate(rph);
 printf(" Total cost of rent %d",ra);
 break;
 }
 break;
 case 2:
 printf("\n You have chosen Long Trip Vehicles \n");
 printf("\n Vehicles Available are \n");
 printf("\n TATA SUMO, TAVERA, TOOFAN \n");
 printf("\n ----------------------------- \n");
 printf("\n Press 1 for TATA, 2 for TAVERA, 3 for TOOFAN \n");
 scanf("%d", &r);
 switch (r)
 {
 case 1:
 printf("\n You have selected TATA SUMO  \n");
rph =300;
ra=rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 case 2:
 printf("\n You have selected TAVERA  \n");
rph =400;
 ra=rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 case 3:
 printf("\n You have selected TOOFAN \n");
rph =450;
ra=rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 }
 break;
 case 3:
 printf("\n You have chosen Luxury Cars");
 printf("\n Luxury Vehicles Available are \n");
 printf("\n BENZ, BMW, AUDI \n");
 printf("\n ------------------------------ \n");
 printf("\n Press 1 for  Benz, 2 for BMW, 3 for Audi \n");
 scanf("%d", &l);
 switch(l)
 {
 case 1:
 printf("\n You have selected Benz  \n");
rph =470;
ra=rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 case 2:
 printf("\n You have selected BMW \n");
rph =1000;
ra= rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 case 3:
 printf("\n You have selected Audi  \n");
rph =2000;
ra= rate(rph);
printf(" Total cost of rent %d",ra);
 break;
 }
 break;
 }}
 printf(" \n if u are interested  press 1 | if not press 2 \n");
 scanf("%d",&a);
 switch(a)
 { case 1:
   printf(" Your Request has been Accepted\n ");
   printf("HAPPY JOURNEY");
   break;
   case 2 :
   printf(" Thanks for visiting us \n");
   break;
 } 
 
}




 int rate(int rph)
{  int h,r;
printf("number of hours needed \n");
scanf("%d", &h);
r= h*rph;
return(r);
}
