  #include <iostream>
  using namespace std;
  
  int main(void){
    int a,b;
    
    cout << "Me diga dois números: ";
    cin >> a >> b;
    if(a == b){
      cout << a << " É igual a " << b << "\n";
    }

    else if (a > b){
      cout << a << " É maior que " << b << "\n";  
    }
     else (a < b);
      cout << a << " É menor que " << b << "\n";
    
    
    return 0;
  }
  
