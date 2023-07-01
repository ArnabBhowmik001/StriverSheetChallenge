#define mode 1000000007
class Solution {
public:
long long power(long long x,long long y){
   if(y==0){
       return 1;
   }
   long long ans=power(x,y/2);
   ans=ans*ans;
   ans=ans%mode;
   if(y%2)ans=ans*x;
   ans=ans%mode;
   return ans;
}
    int countGoodNumbers(long long n) {
        long long  evenplaces=(n/2+n%2);
        long long oddplaces=(n/2);
        return (power(5,evenplaces)*power(4,oddplaces))%mode;
    }
};