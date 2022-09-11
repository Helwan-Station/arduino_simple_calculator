#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7
#define a2 A0
#define b2 A1
#define c2 A2
#define d2 A3
#define e2 A4
#define f2 A5
#define g2 6
 int x=0;
 int y=0; 
 int x2=0;
 int y2=0;
 int z=0;
 int w=0;
 int r=0;
  bool pressed = false;
  bool pressed2 = false;
  bool pressed3 = false;
  bool pressed4 = false;
  bool pressed5 = false;
void setup() 
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
  pinMode(1,INPUT);
  pinMode(a2,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(e2,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(g2,OUTPUT);
  seg0();
  num0();
}

void loop() 
{
  
  while(digitalRead(5)==LOW)
 {
  pressed=true;
 }
  if(pressed==true )
  {
    x=y+1;
    if(x!=y)
    {
      switch(x)
      {
        case 1:seg1();
        break;
        case 2:seg2();
        break;
        case 3:seg3();
        break;
        case 4:seg4();
        break;
        case 5:seg5();
        break;
        case 6:seg6();
        break;
        case 7:seg7();
        break;
        case 8:seg8();
        break;
        case 9:seg9();
        break;
        default:seg0();
        x=0;
        break;
       }
      y=x;
    }
 pressed=false;
  }
    while(digitalRead(4)==LOW)
 {
  pressed2=true;
 }
  if(pressed2==true)
  {
    x2=y2+1;
    if(x2!=y2)
    {
      switch(x2)
      {
        case 1:num1();
        break;
        case 2:num2();
        break;
        case 3:num3();
        break;
        case 4:num4();
        break;
        case 5:num5();
        break;
        case 6:num6();
        break;
        case 7:num7();
        break;
        case 8:num8();
        break;
        case 9:num9();
        break;
        default:num0();
        x2=0;
        break;
       }
      y2=x2;
    }
 pressed2=false;
  }
   while(digitalRead(3)==LOW)
 {
  pressed3=true;
 }
  while(digitalRead(2)==LOW)
 {
  pressed4=true;
 }
 if(pressed3==true && pressed4==false)
 {
  z=x+x2;
  w=z%10;
  r=z/10;
 }
 if(pressed4==true && pressed3==false)
 {
  z=abs(x-x2);
  w=z%10;
  if(x<x2)
   {
   r=10;
   }
 }
 while(digitalRead(1)==LOW)
 {
  pressed5=true;
 }
 if(pressed4==true || pressed3==true)
 {
  switch(w)
      {
        case 1:num1();
        break;
        case 2:num2();
        break;
        case 3:num3();
        break;
        case 4:num4();
        break;
        case 5:num5();
        break;
        case 6:num6();
        break;
        case 7:num7();
        break;
        case 8:num8();
        break;
        case 9:num9();
        break;
        default:num0();
        x2=0;
        break;
       }
       switch(r)
      {
        
        case 1:seg1();
        break;
        case 2:seg2();
        break;
        case 3:seg3();
        break;
        case 4:seg4();
        break;
        case 5:seg5();
        break;
        case 6:seg6();
        break;
        case 7:seg7();
        break;
        case 8:seg8();
        break;
        case 9:seg9();
        break;
        case 10: mi();
        break;
        default:seg0();
        x=0;
        break;
       }
        pressed3=false;
        pressed4=false;
        x=0;
        x2=0;
        y=0;
        y2=0;
 }
 if(pressed5==true)
 {
        x=0;
        x2=0;
        y=0;
        y2=0;
        r=0;
        w=0;
        seg0();
        num0();
        pressed5=false;
 }
}
void seg1()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void seg2()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
}
void seg3()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
}
void seg4()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void seg5()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void seg6()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void seg7()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void seg8()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void seg9()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
void seg0()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
void num1()
{
  digitalWrite(a2,LOW);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  digitalWrite(e2,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(g2,LOW);
}
void num2()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,LOW);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,HIGH);
  digitalWrite(f2,LOW);
  digitalWrite(g2,HIGH);
}
void num3()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(g2,HIGH);
}
void num4()
{
  digitalWrite(a2,LOW);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  digitalWrite(e2,LOW);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,HIGH);
}
void num5()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,LOW);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,HIGH);
}
void num6()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,HIGH);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,HIGH);
}
void num7()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  digitalWrite(e2,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(g2,LOW);
}
void num8()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,HIGH);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,HIGH);
}
void num9()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,LOW);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,HIGH);
}
void num0()
{
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(e2,HIGH);
  digitalWrite(f2,HIGH);
  digitalWrite(g2,LOW);
}
void mi()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
}
