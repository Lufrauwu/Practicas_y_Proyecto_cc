#include <iostream>
#include "myheader.hh"


int main()
{ 
    int* numArr{new int[3]{
    1, 2, 3
  }};

  for(int i{}; i < 3; i++)
  {
    std::cout << &numArr[i] << std::endl;
  }
/*for(int&* n : numArr)
  {
    std::cout << n << std::endl;
  }*/

   /* int numberInteger{1};
    float numberFloat{5.f};
    const char* stringchar{"My string char"};
    char chararray[]{"char array"};
    std::string myString{"my string from STL"};
    //std:: cout<<"Suma: "<< Add(1.f,2.5f);*/

  /*  int* numPointerArr{new int[]{
        1,2,3
        }};*/

    /*std::cout<< numberInteger<< std::endl;
    std::cout<<numberFloat<<std::endl;
    std::cout<<stringchar<< "Size: "<<sizeof(stringchar)<<std::endl;
    std::cout<< chararray<< "Size: "<<sizeof(chararray)<<std::endl;
    std::cout<<myString<< "Size: "<<sizeof(myString)<< std::endl;*/
    //std::cout<<"pointer char check: "<<std::endl;

    /*for (int i {}; i < 15; i++)
    {
        std::cout<<stringchar+i<<std::endl;
    }*/
   /* for (int i = 0; i < 3; i++)
    {
        std::cout<<*(numPointerArr+i)<<std::endl;
    }*/

    int number{5};
    int number2{number};
    int& numberRef{number};
    int* numberPointer{&number};
    int** numberPointer2{&numberPointer};

    std::cout<<"number variable"<<number<<std::endl;
    std::cout<<"number2 variable"<<number2<<std::endl;
    std::cout<<"number reference"<<numberRef<<std::endl;
    numberRef++;
    std::cout<<"number variable"<<number<<std::endl;
    std::cout<<"number2 variable"<<number2<<std::endl;
    std::cout<<"number reference"<<numberRef<<std::endl;
    std::cout<<std::endl;
    std::cout<<"number variable"<<&number<<std::endl;
    std::cout<<"number2 variable"<<&number2<<std::endl;
    std::cout<<"number reference"<<&numberRef<<std::endl;
    numberRef= number2;
    std::cout<<std::endl;
    std::cout<<"number variable"<<number<<std::endl;
    std::cout<<"number2 variable"<<number2<<std::endl;
    std::cout<<"number reference"<<numberRef<<std::endl;
    std::cout<<std::endl;
    std::cout<<"number variable"<<&number<<std::endl;
    std::cout<<"number2 variable"<<&number2<<std::endl;
    std::cout<<"number reference"<<&numberRef<<std::endl;
    numberPointer= &number2;
    std::cout<<std::endl;
    std::cout<<"number pointer memory"<<numberPointer<<std::endl;
    std::cout<<"number pointer value"<<*numberPointer<<std::endl;
    std::cout<<"number pointer fererence"<<&numberPointer<<std::endl;
    std::cout<<"pointer to pointer"<<**numberPointer2;

    std:: cin.get();
    return 0;
}