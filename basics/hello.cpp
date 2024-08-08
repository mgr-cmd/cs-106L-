
/*This is a first cpp program 
talks about types and function overloading */


#include<iostream> 

    int d( int foo) { return foo/2;  } 
    double e (double foo) { return foo/2 ; } 
    int f (double foo) {
    return int(foo/2) ;} 
    void g (double c ) {
        std::cout<< c << std::endl; 


    }  
// function overloading 

void half() {
    std::cout <<"this is half" <<std::endl ; 
     

}
/* to overload a function, declare multiple functions with the same name but differently 
typed parameters or a different numver of parameters ! */
double half(double x) {
     
        std::cout<<"2"<<std::endl ; 
        return x/2 ; 



}
// c++ allows specifying default parameter values ! 

int half(int x, int divisor = 2 ) {

       
        return x/divisor ; 


} 







int main() {

        std::string a ="test" ; 
        bool bval = true ; 
       
        std::cout<<bval<<std::endl ;
        std::cout<<"half1"<<std::endl;
        std::cout<<"half2"<<half(2.0)<<std::endl;
        std::cout<<"Hello, World!"<<std::endl; 
        std::cout<<"half3"<<half(2,2)<<std::endl;
        std::cout<<d(2)<<std::endl ; 
        e(2.5) ; 
        f(2.5) ; 
        g(2.5);

        
        return 0 ; 

}