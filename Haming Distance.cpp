#include<iostream>
using namespace std;

int hamingDistance(string str1, string str2){
	int i = 0;
	int distance = 0;
	while(i < str1.length() || i < str2.length()){
		if(str1[i] != str2[i]){
			distance++;
		}
		i++;
	}
	cout << "distance is: " << distance;
	return distance;
}
int main(){
	hamingDistance("zahid", "rashd");
}
