int SEG_A = 2;
int SEG_B = 3;
int SEG_C = 4;
int SEG_D = 5;
int SEG_E = 6;
int SEG_F = 7;
int SEG_G = 8;
int SEG_DP = 9;
int Q[] = {13,12,11,10};
int column[] = {3,2,1,0};
int decoder[] = {0x3F,0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
int buffer[] = {0,1,2,3};
int i = 0;
int j = 0;
int K = 0;
int L = 0;
int TJ,TK;

void blank(){
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DP, LOW);
}

void outcolumn(int a){
  digitalWrite(Q[0], 1 & 1<<a);
  digitalWrite(Q[1], 2 & 1<<a);
  digitalWrite(Q[2], 4 & 1<<a);
  digitalWrite(Q[3], 8 & 1<<a);
}

void outdata(int a){
  digitalWrite(SEG_A, a & 1<<0);
  digitalWrite(SEG_B, a & 1<<1);
  digitalWrite(SEG_C, a & 1<<2);
  digitalWrite(SEG_D, a & 1<<3);
  digitalWrite(SEG_E, a & 1<<4);
  digitalWrite(SEG_F, a & 1<<5);
  digitalWrite(SEG_G, a & 1<<6);
  digitalWrite(SEG_DP, a & 1<<7);
}



void setup(){
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(SEG_DP, OUTPUT);
  pinMode(Q[0], OUTPUT);
  pinMode(Q[1], OUTPUT);
  pinMode(Q[2], OUTPUT);
  pinMode(Q[3], OUTPUT);
}

void loop(){

  outdata(decoder[buffer[i]]);
  outcolumn(column[i]);
  delay(3);
  if(i<4){
    i++;
  } else {
    i = 0;
  }
  if (L<50){
    L++;
  } else {
    L = 0;
    if(j<59){
      j++;
    } else {
      j=0;
      if(K<59){
        K++;
      } else {
        K = 0;
      }
    }
  }

  TJ=j; TK=K;
  buffer[0]=TJ % 10;
  TJ = TJ/10;
  buffer[1]=TJ;
  buffer[2]=TK%10;
  TK = TK/10;
  buffer[3]=TK;


}
