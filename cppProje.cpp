#include<iostream>
#include<cmath>

/*  
int main() {
    double x = 3.94;
    double y = 4;
    double z ;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2,5); (2 üzeri 5) 

    //z = sqrt(16); (karekök)
    //z = round(x);  (virgüllü sayiyi tama çevirir)
    


    std::cout << z;

    return 0;
}
*/

//üçgenin hipotenüsünü bulma.

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";  
    std::cin >> b;
    
    //c = sqrt(pow(a,2) + pow (b,2));

    a = pow(a,2);   
    b = pow(b,2);   
    c = sqrt(a + b);

    std::cout << "the length of side c is: " << c;



    return 0;
}