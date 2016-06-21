int main() {
  int i,count;
  int data[4];
  for (i=0; i<4; i++) data[i] = 0;
  data[2]=-5;
  //@ ensures count<=3;
  {
  count = 0;
  i = 2;
//  for (i=0; i<4; i++)
    count += (data[i]);
  }
}
