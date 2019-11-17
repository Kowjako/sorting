#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
using namespace std;
int main() {
    int A[SIZE];
    for(int i=0;i<SIZE;i++) cin>>A[i];
    //SORTOWANIE BABELKOWE
    for(int i=0;i<SIZE-1;i++) {
        for(int j=0;j<SIZE-1-i;j++) {
            if(A[j]>A[j+1]) {
                int k = A[j+1];
                A[j+1]=A[j];
                A[j] = k;
            }
        }
    }
    //SORTOWANIE SELEKCYJNE
    int pozycja;
    for(int i=0;i<SIZE-1;i++) {
        int maximum = 0;
        int indmax = 0;
        for(int j=0;j<SIZE-i;j++) {
            if(A[j]>maximum) {
                maximum=A[j];
                indmax = j;
            }
        }
        pozycja = A[SIZE-1-i];
        A[SIZE-1-i] = maximum;
        A[indmax] = pozycja;
    }
    //SORTOWANIE PRZEZ WSTAWIANIE
    for(int i=1;i<SIZE;i++) {
        int x = A[i];
        int j=i;
        while(A[j-1]>x && j>0) {
            A[j]=A[j-1];
            A[j-1]=x;
            j--;
        }
    }
    for(int i=0;i<SIZE;i++) cout<<A[i]<<" ";
    return 0;
}
