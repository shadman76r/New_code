/// Number of stepts to reduce a number in binary represenrtaion to one

class Solution{
    public:
    int numSteps(string  s)
    {
         int n = s.length();
         int op=0;
         int carry=0;
          for(int i=n-1; i>=1; i--) // testing
          {
            if(((s[i]-'0')+carry)%2==1){ // this is for odd
            op+=2;
            carry=1;
            }else{  // this is for even number
                op+=1;
            }
          }
          return op+carry; // main result
    }
};