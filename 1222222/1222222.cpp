#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
const int N=3;
struct QUEUE {
int arr[N]; 
int first; 
int last; 
int count;
};

int Full(QUEUE *pq) {
if (pq->count==N) 
return 1; 
else 
return 0; 
} 

int Empty(QUEUE *pq) {
if (pq->count==0) 
return 1; 
else 
return 0; 
} 

void Initial(QUEUE *pq) {
 pq->first=0; 
 pq->last=0; 
 pq->count=0; 
} 

void Add(QUEUE *pq){
	int a;
	cin >>a;
 pq->arr[pq->last]=a; 
 pq->last++; 
if (pq->last==N) 
 pq->last=0; 
 pq->count++; 
} 

void Del(QUEUE *pq){
 pq->arr[pq->first]=0; 
 pq->first++; 
if (pq->first==N) 
 pq->first=0; 
 pq->count--; 
 }

void Show(QUEUE *pq){
int i,tmp; 
for (i=pq->first,tmp=0;tmp<pq->count;tmp++,i++) 
 { 
if (i==N) 
 i=0; 
 cout << pq->arr[i] << " "; 
 } 
} 

int main()
 {
 QUEUE q; 
 Initial(&q); 
char otv; 
do 
 { 
 cout << "1. Dobavlenie v konec" << endl << 
 "2. Ydalenie iz nachala" << endl << 
 "3. Vivod" << endl << 
 "0. Vixod" << endl; 
 cin >> otv; 
switch(otv) 
 { 
case '1': 
if (Full(&q)==1) 
 cout << endl << "POlnaya" << endl; 
else 
 { 
 Add(&q); 
 cout << endl << "Element dobavlen" << endl; 
 } 
break; 

case '2':
if (Empty(&q)==1) 
 cout << endl << "Pystaya" << endl; 
else 
 { 
 Del(&q); 
 cout << endl << "Element ydalen" << endl; 
 } 
break; 

case '3':
if (Empty(&q)==1) 
 cout << endl << "Ochered" << endl; 
else 
 { 
 cout << endl << "Elementi:" << endl; 
 Show(&q); 
 cout << endl; 
 } 
break; 
case '0':
break; 

default:
 cout << endl << "Oshibka vvoda" << endl; 
break; 

 }

 }while(otv!='0');
 cin.get();

 }