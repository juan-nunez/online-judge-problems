#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <limits>
#include <iterator>
using namespace std;


int main(){
	int a,d;
	while(cin>>a>>d){
		if(a==0 && d==0) break;

		int att[a]={0};
		for(int i=0;i<a;i++){
			cin>>att[i];
		}
		int def[d]={0};
		for(int i=0;i<d;i++){
			cin>>def[i];
		}
		sort(att,att+a);
		sort(def,def+d);
		if(att[0]<def[1]) cout<<"Y"<<endl;
		else cout<<"N"<<endl;

	}
}