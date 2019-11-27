#include<iostream>
using namespace std;

int hamingDistance(string str1, string str2){
	int i = 0;
	int dif = 0;
	int distance = 0;
	while(i < str1.length() && i < str2.length()){
		if(str1[i] != str2[i]){
			dif++;
		}
		i++;
	}
	if(str1.length() > str2.length()){
		distance = dif + (str1.length() - str2.length());
	}else{
		distance = dif + (str2.length() - str1.length());
	}
	
	cout << "distance is: " << distance;
	return distance;
}
int main(){
	hamingDistance("zahid", "jhinhid");
}
