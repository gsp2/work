
/*@ ensures ((!(num<0) || \result==0) && (!(num>=0)  || \result==1));
*/
int nonneg(int num);

int main() {
  int i,count;
  int data[4];
  for (i=0; i<4; i++) data[i] = 0;
  data[2]=-5;
  //@ ensures count==3;
  {
  count = 0;
  for (i=0; i<4; i++)
    count += nonneg(data[i]);
  }
} 

  
    
