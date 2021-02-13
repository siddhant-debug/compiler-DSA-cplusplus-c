#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
 int rx,ry,gm,gd;
 float x,y;
 float d1,d2,dx,dy;
 //take ellipse radius as input we will not take center as it is default (0,0)
 cout<<"enter radii rx,ry:"<>rx>>ry;
 //initialize starting point
 x=0;y=ry;
 //initialize graph
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm," ");
 //initial decision variable for region 1
 d1=ry*ry-rx*rx*ry+(rx*rx)/4;
 do{
  //draw all four symmetric points
  putpixel(x+300,y+300,1);
  putpixel(-x+300,y+300,2);
  putpixel(-x+300,-y+300,3);
  putpixel(x+300,-y+300,4);
  //change in coordinates based on decision variable
  if(d1<0 .0="" 2="" all="" based="" change="" coordinates="" d1="d1+dx;" d2="" decision="" delay="" do="" draw="" dx="rx*rx*(2-2*y)+ry*ry*(3+2*x);" else="" for="" four="" if="" in="" initial="" on="" points="" putpixel="" region="" rx="" ry="" symmetric="" variable="" while="" x="" y="">0.0)
  {
   y=y-1;
   dy=rx*rx*(3-2*y);
   d2=d2+dy;
  }
  else
  {
   y=y-1;x=x+1;
   dy=ry*ry*(2+2*x)+rx*rx*(3-2*y);
   d2=d2+dy;
  }
  delay(10);
 }while(y>0);

 getch();
return 0;
}
