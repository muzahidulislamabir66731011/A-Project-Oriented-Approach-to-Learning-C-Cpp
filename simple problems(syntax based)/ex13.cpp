#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ifstream mata("mata.txt");
    std::ifstream matb("matb.txt");
    std::ifstream sum("sum.txt");
    if(!mata.is_open()||!matb.is_open()){
        std::cout << "Unable to open files for reading." << std::endl;
        return 1;
    }
    int a,b;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            mata>> a;
            matb>> b;
            if(j==9){
                sum<<a+b<<'\n';
            }else{
                sum<<a+b<<'\t';
            }
        }
    }
    std::cout << "The sum of the matrices has been calculated into the file sum.txt." << std::endl;
    return 0;
}
