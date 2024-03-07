#include <iostream>
#include <string>
using namespace std;
void swap(char &ch1, char &ch2){
    char temp = ch1; 
    ch1 = ch2;
    ch2 = temp;
}

int main() {
	// Complete the program
  
    string a, b;
    cin >> a >> b;
    
    //length of strings
    cout << a.size() << " " << b.size() << endl;
    
    //concatenating the two strings
    string c = a + b;
    cout << c << endl;
    
    //swapping the first characters
    swap(a[0], b[0]);
    cout << a << " " << b;
  
    return 0;
}
