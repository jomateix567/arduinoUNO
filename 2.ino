//Pràctica 1-DIG

//programa 2-Eduard Cid-28-10-19
//curs 2019-20, 1r CFGS Electromedicina Clínica, Mòdul 09
void setup() 
void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() 
{
totesON();
delay (1000);
totesOFF();
delay (1000);
}


void totesON()
{
  digitalWrite (9, HIGH);
  digitalWrite (A3, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (3, HIGH);
  delay (1000);
}
void totesOFF()
{
  digitalWrite (9, LOW);
  digitalWrite (A3, LOW);
  digitalWrite (7, LOW);
  digitalWrite (3, LOW);
  delay (1000);
}



          

       
