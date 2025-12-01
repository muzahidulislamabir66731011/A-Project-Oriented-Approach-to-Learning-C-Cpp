#include <iostream>

int main()
{
    int matrix[5][5] = {
      4, 6, 25, 88, 5,
      34, 5, 300, 4, 65,
      78, 43, 11, 90, 125,
      98, 585, 12, 63, 21,
      45, 35, 9, 5, 1
   };
   std::cout<<"In the array:"<<std::endl;
   int sum=0;
   int i,j;
   for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           sum+=matrix[i][j];
           if(j==4){
               std::cout<<" "<<matrix[i][j]<<std::endl;
           }else{
               std::cout<<" "<<matrix[i][j];
           }
       }
   }
   std::cout<<"the sum of the elements "<<sum;
    return 0;
}
