// C++ code
//

const int l1=12;
const int l2=11; 
const int l3=10;

void setup()
{
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
}

void loop()
{
  
  light(0,1,0);
  delay(3000);
  light(0,0,1);
  delay(3000);
  light(1,0,0);
  delay(3000);
  
}

void light(int a,int b,int c){
  digitalWrite(l1,a);
  digitalWrite(l2,b);
  digitalWrite(l3,c);
}
