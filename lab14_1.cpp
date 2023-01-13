#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    b[5]=100;
    b[2]=1;
    for(int i=0;i<n;i++){
        b[0]+=a[i]/n;
        b[1] += pow(a[i],2);
        b[2] *= a[i];
        b[3] += 1/a[i];
        if(b[4]<a[i]){
            b[4]=a[i];
        }
        else if(b[5]>a[i]){
            b[5]=a[i];
        }
        
    }
    b[1]=sqrt((b[1]/n)-(b[0]*b[0]));
    b[2]=pow(b[2],1*1.0/n);
    b[3]=n/b[3];
    
    
}
