#include <cmath>
#include <iostream>
#include<vector>
#include<algorithm>

using std::cout;
using Vector = std::vector<int>;
 Vector sortvalues(){
      Vector values={1,2,3,4,5,6,7,8,9};
      std::sort(values.begin(),values.end(),
      [](int left,int right){
         return(left+1)%3<(right+1)%3;
      });
      return values;
   }
int main()
{
   Vector a=sortvalues();
   for(const auto& x:a)
   {
      cout<<x<<" ";
   }
}
