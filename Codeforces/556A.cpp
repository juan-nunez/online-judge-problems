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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt0=0;
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0')cnt0++;
		else cnt1++;
	}
	cout<<abs(cnt1-cnt0)<<endl;
}