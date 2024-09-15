#include<iostream>
#include<iomanip> //for setting output alignment

int main(){

    const int widthtext =15;
    const int widthnum =10;

    std::cout<<std::left<<std::setw(widthtext)<<"Course"<< std::endl;
    std::cout<<std::right<<std::setw(widthnum)<<"Student"<<std::endl;

    std::cout<<std::left<<std::setw(widthtext)<<"C++"<<std::endl;
    std::cout<<std::right<<std::setw(widthnum)<<100<<std::endl;


    std::cout<<std::left<<std::setw(widthtext)<<"JavaScript"<<std::endl;
    std::cout<<std::right<<std::setw(widthnum)<<50<<std::endl;

    return 0;
    
}