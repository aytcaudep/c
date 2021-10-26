#include <iostream>
#include <fstream>
#include "k.h"
using namespace std;
void readArray(int a[], int n, ifstream& fin) {
    for (int i = 0; i < n; i++)fin >> a[i];
}
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
void reverseArray(int a[], int n) {
    int temp;
    for (int i = 0; i < (n / 2); i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
int arrayMin(int a[], int n) {
    int min = a[0], min_index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }
    return min_index;
}
int arrayFind(int a[], int n, int x) {
    int ind = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
            ind = i;
        }
    }
    if (ind == -1) return -1;
}
void arrayCopy(int a[], int n, int b[]) {
    for (int i = 0; i < 100; i++) {
        b[i] = a[i];
    }
}
void fillArray(int a[], int n, int k = 0) {
    for (int i = 0; i < n; i++) {
        a[i] = k;
    }
}
void insertInArray(int a[], int& n, int position, int num) {
    for (int i = n++; i >= position; i--) {
        a[i + 1] = a[i];
    }
    a[position] = num;

}
void printArray(int a[], int n, ofstream& fout) {
    for (int i = 0; i < n; i++) fout << a[i] << " ";
}
int main(){
int n;
cin >> n;
}
