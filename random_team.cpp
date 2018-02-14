#include <iostream>

using namespace std;

long long n , m;

int main(){
	cin >> n >> m;
	long long  kmx = ((n - (m - 1)) * ((n - (m-1)) -1)) / 2 ;
	long long kmn = ((n / m) * ((n / m) - 1)) / 2;
 	if(n % m == 0){
 		kmn *= m;
 	}else{
 		kmn *= m - (n % m);
 		long long r =(((n / m) + 1	) * (n / m)) / 2;
 		kmn += r * (n % m);
 	}
	cout << kmn << " " << kmx << endl;
}
