//count up button -> increase number stored in  variable till it reach max (99, it won't increase)  (7 segment displays number till entered) 
//count down button -> decrease number stored in variable till it reach min (-9, it won't decrease) (7 segment displays number till entered)
//enter button -> to store number in variable and switch to nex number to be added  (7 segment displays result) (if result if out of boundaries -9 to 99, we display to dashes)
//clear button -> clear all value in variables and reset 7 segment to zero
//add button -> uses add() function to add two variables when pressed
//subtract button -> uses subtract() function to subtract two variables when pressed


//7 segment 1
#define a1 A5 
#define b1 A4
#define c1 A3
#define d1 A2
#define e1 A1
#define f1 A0
#define g1 7

//7 segment 2
#define a2 6
#define b2 5
#define c2 4
#define d2 3
#define e2 2
#define f2 1
#define g2 0


#define clearAllButton 13 //pull-down
#define enterButton 12 //pull-down
#define countDownButton 11 //pull-up
#define countUpButton 10 //pull-up

#define addButton 9 //pull-down
#define subtractButton 8 //pull-down





int x = 0;
int y = 0;
int result =0;


bool pressedCountUpButton = false;
bool pressedCountDownButton = false;
bool pressedEnterButton = false;
bool pressedClearAllButton = false;
bool pressedAddButton = false;
bool pressedSubtractButton = false;

char currentLetter = 'x';


void setup() {
  
  
  for(int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);
  }

 

  pinMode(a1, OUTPUT); 
  pinMode(b1, OUTPUT);
  pinMode(c1, OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(f1, OUTPUT);


for(int i = 8; i <= 13; i++)
{
  pinMode(i, INPUT);
}
  
  chooseNo(x, 1);
  chooseNo(x, 2);


}

void loop() {

  while(digitalRead(countUpButton) == LOW)
  {
    pressedCountUpButton = true;
  }

   while(digitalRead(countDownButton) == LOW)
   {
    pressedCountDownButton = true;
    
   }

   
  if(pressedCountUpButton == true)
  {

    
    
    countUp(currentLetter);
    pressedCountUpButton = false;
  }

  if(pressedCountDownButton == true)
  {
    countDown(currentLetter);
    pressedCountDownButton = false;
  }

  while(digitalRead(enterButton) == HIGH)
   {
    pressedEnterButton = true;
   }

   if(pressedEnterButton == true)
   {
    currentLetter = 'y';
      chooseNo(y, 1);
  chooseNo(y, 2);

    pressedEnterButton = false;
   }

   while(digitalRead(clearAllButton) == HIGH)
   {
    pressedClearAllButton = true;
   }

   if(pressedClearAllButton == true)
   {
   
    clearAll();
    pressedClearAllButton = false;
   }


  while(digitalRead(addButton) == HIGH)
  {
    pressedAddButton = true;
  }

  if(pressedAddButton == true)
  {
    add();
    pressedAddButton = false;
  }


  while(digitalRead(subtractButton) == HIGH)
  {
    pressedSubtractButton = true;
  }

  if(pressedSubtractButton == true)
  {
    subtract();
    pressedSubtractButton = false;
  }
  

}


void one(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
 digitalWrite(a1, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, LOW);
 digitalWrite(e1, LOW);
 digitalWrite(f1, LOW);
 digitalWrite(g1, LOW);
 break;

    case 2:
 digitalWrite(a2, LOW);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, LOW);
 digitalWrite(e2, LOW);
 digitalWrite(f2, LOW);
 digitalWrite(g2, LOW);
 break;
    
  }
}


void two(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
 digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, LOW);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, HIGH);
 digitalWrite(f1, LOW);
 digitalWrite(g1, HIGH);
 break;

    case 2:
 digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, LOW);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, HIGH);
 digitalWrite(f2, LOW);
 digitalWrite(g2, HIGH);
 break;
    
  }
}

void three(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
 digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, LOW);
 digitalWrite(f1, LOW);
 digitalWrite(g1, HIGH);
 break;

    case 2:
 digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, LOW);
 digitalWrite(f2, LOW);
 digitalWrite(g2, HIGH);
 break;
    
  }
}

void four(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
   digitalWrite(a1, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, LOW);
 digitalWrite(e1, LOW);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, HIGH);
 break;

    case 2:
     digitalWrite(a2, LOW);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, LOW);
 digitalWrite(e2, LOW);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, HIGH);
 break;
    
  }
}

void five(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
     digitalWrite(a1, HIGH);
 digitalWrite(b1, LOW);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, LOW);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, HIGH);
 break;

    case 2:
     digitalWrite(a2, HIGH);
 digitalWrite(b2, LOW);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, LOW);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, HIGH);
 break;
    
  }
}

void six(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
     digitalWrite(a1, HIGH);
 digitalWrite(b1, LOW);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, HIGH);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, HIGH);
 break;

    case 2:
     digitalWrite(a2, HIGH);
 digitalWrite(b2, LOW);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, HIGH);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, HIGH);
 break;
    
  }
}

void seven(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
     digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, LOW);
 digitalWrite(e1, LOW);
 digitalWrite(f1, LOW);
 digitalWrite(g1, LOW);
 break;

    case 2:
     digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, LOW);
 digitalWrite(e2, LOW);
 digitalWrite(f2, LOW);
 digitalWrite(g2, LOW);
 break;
    
  }
}

void eight(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
     digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, HIGH);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, HIGH);
 break;

    case 2:
     digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, HIGH);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, HIGH);
 break;
  }
}

void nine(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
     digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, LOW);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, HIGH);
 break;

    case 2:
     digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, LOW);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, HIGH);
 break;
    
  }
}


void zero(int segmentNo)
{
  switch(segmentNo)
  {
    case 1:
 digitalWrite(a1, HIGH);
 digitalWrite(b1, HIGH);
 digitalWrite(c1, HIGH);
 digitalWrite(d1, HIGH);
 digitalWrite(e1, HIGH);
 digitalWrite(f1, HIGH);
 digitalWrite(g1, LOW);
 break;


    case 2:
 digitalWrite(a2, HIGH);
 digitalWrite(b2, HIGH);
 digitalWrite(c2, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(e2, HIGH);
 digitalWrite(f2, HIGH);
 digitalWrite(g2, LOW);
 break;

    
  }
}

void negativeSign(int segmentNo)
{
  switch (segmentNo)
  {
    case 1:
        digitalWrite(a1, LOW);
 digitalWrite(b1, LOW);
 digitalWrite(c1, LOW);
 digitalWrite(d1, LOW);
 digitalWrite(e1, LOW);
 digitalWrite(f1, LOW);
 digitalWrite(g1, HIGH);
 break;

 case 2:
    digitalWrite(a2, LOW);
 digitalWrite(b2, LOW);
 digitalWrite(c2, LOW);
 digitalWrite(d2, LOW);
 digitalWrite(e2, LOW);
 digitalWrite(f2  , LOW);
 digitalWrite(g2, HIGH);
 break;
 
  }

}







void chooseNo(int no, int segmentNo)
{
    if(segmentNo == 1)
    {
      switch(no)
      {
        case 0:
          zero(1);
          break;
        case 1:
          one(1);
          break;
        case 2:
          two(1);
          break;
         case 3:
          three(1);
          break;
         case 4:
          four(1);
          break;
         case 5:
          five(1);
          break;
         case 6:
          six(1);
          break;
         case 7:
          seven(1);
          break;
         case 8:
          eight(1);
          break;
         case 9:
          nine(1);
          break;
      }
    }

    if(segmentNo == 2)
    {
        switch(no)
      {
        case 0:
          zero(2);
          break;
        case 1:
          one(2);
          break;
        case 2:
          two(2);
          break;
         case 3:
          three(2);
          break;
         case 4:
          four(2);
          break;
         case 5:
          five(2);
          break;
         case 6:
          six(2);
          break;
         case 7:
          seven(2);
          break;
         case 8:
          eight(2);
          break;
         case 9:
          nine(2);
          break;
      }
  
    }
  
      
  }



void countUp(char variable)
{
   //variable > 9 -> two segments
    //variable < 0 -> -ve sign
    // 0 < variable < 9 -> 1st segment: zero, 2nd segment variable


  switch(variable)
  {
    case 'x':
      x++;
        if(x < 0 && x >= -9)
    {
      negativeSign(1); 
      chooseNo(x *-1, 2);

    }

    else if(x >= 0 && x <= 9)
    {
      zero(1);
      chooseNo(x, 2);
    }
    else if(x > 9 && x < 99)
    {
      int tensPart = (x - (x % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = x % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }
break;

       case 'y':
      y++;
        if(y < 0 && y >= -9)
    {
      negativeSign(1); 
      chooseNo(y * -1, 2);

    }

    else if(y >= 0 && y <= 9)
    {
      zero(1);
      chooseNo(y, 2);
    }
    else if(y > 9 && y < 99)
    {
      int tensPart = (y - (y % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = y % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }
  break;
  }


  
}



void countDown(char variable)
{

 

  switch(variable)
  {
    case 'x':
      x--;
        if(x < 0 && x >= -9)
    {
      negativeSign(1); 
      chooseNo(x * -1, 2);

    }

    else if(x >= 0 && x <= 9)
    {
      zero(1);
      chooseNo(x, 2);
    }
    else if(x > 9 && x < 99)
    {
      int tensPart = (x - (x % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = x % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }
break;

       case 'y':
      y--;
        if(y < 0 && y >= -9)
    {
      negativeSign(1); 
      chooseNo(y * -1, 2);

    }

    else if(y >= 0 && y <= 9)
    {
      zero(1);
      chooseNo(y, 2);
    }
    else if(y > 9 && y < 99)
    {
      int tensPart = (y - (y % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = y % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }

break;
  }
}

void clearAll()
{
  x = 0;
  y = 0;
  currentLetter = 'x';
  result = 0;

    chooseNo(0, 1);
  chooseNo(0, 2);

}

void add()
{
  result = x + y;

         if(result < 0 && result >= -9)
    {
      negativeSign(1); 
      chooseNo(result, 2);

    }

    else if(result >= 0 && result <= 9)
    {
      zero(1);
      chooseNo(result, 2);
    }
    else if(result > 9 && result < 99)
    {
      int tensPart = (result - (result % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = result % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }
    
}

void subtract()
{
  result = x - y;

           if(result < 0 && result >= -9)
    {
      negativeSign(1); 
      chooseNo(result * -1, 2);

    }

    else if(result >= 0 && result <= 9)
    {
      zero(1);
      chooseNo(result, 2);
    }
    else if(result > 9 && result < 99)
    {
      int tensPart = (result - (result % 10)) / 10;   //(19 - (9)) / 10 = 10 / 10 = 1
      int unitsPart = result % 10;  //19 % 10 = 9
      chooseNo(tensPart, 1);
      chooseNo(unitsPart, 2);
      
    }
    else
    {
      negativeSign(1);
      negativeSign(2);
    }
    
}
