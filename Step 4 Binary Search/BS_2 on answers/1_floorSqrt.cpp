int floorSqrt(int n)
{
   int l = 1;
   int r = n;
   
   while(l<=r){
       long long mid = (l+r)/2;
       long long val = mid*mid;

       if(val<=(long long) n){
           l = mid+1;
       }
       
       else {
           r = mid-1;
       }
   }
   return r;
}
