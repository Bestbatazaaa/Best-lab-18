#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(const Rect& a, const Rect& b){
	double Axis = a.x + a.w;
	double Ayis = a.y - a.h;

	double Bxis = b.x + b.w;
	double Byis = b.y - b.h;
	
	double width = min(Axis,Bxis)-max(a.x,b.x);
	double length = min(a.y,b.y)-max(Ayis,Byis);
	if(width > 0 and length > 0){
		return length*width;
	}else{
		return 0;
	}

}

int main(){
Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};	
cout << overlap(R1,R2);	
}
