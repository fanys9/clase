#include <iostream>
#include <vector>
using namespace std;
//Funcion recursiva:Recibe el numero en decimal
unsigned long binRecursiva(int n){  
    if (n/2!=0){  //El caso base es cuando el cociente es igual a 0, se busca llegar a este caso 
       binRecursiva(n/2);  
       cout<<n%2; //al llegar al caso base se regresa para imprimir los residuos  
    }
    else {
         cout<<n%2; //con los dos cout nos aseguramos de que todos los digitos se impriman 
         return 0;
    }
}
//Funcion iterativa:recibe el numero decimal 
unsigned long binIterativa(int n){
vector<int> vector1;
    while (n>0){   
      vector1.push_back(n%2); 
      n=n/2; //efectua las operaciones para convertirlo a binario 
    }
//imprimir el vector al reves    
for (int i=vector1.size()-1;i>=0;i--){  
    cout<<vector1[i];
 }
return 0;
}

int main(){
int n=11;
cout<<"Recursiva"<<endl;
binRecursiva(n);
cout<<endl;
cout<<"Iterativa"<<endl;
binIterativa(n);
return 0;
}