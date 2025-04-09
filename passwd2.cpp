#include <iostream>
#include <string>
using namespace std;
int main(){
  string password = "a1b2"; //Why is this there?
  string guess = "0000";   //↑It's convenient to hav
    string chars = "0123456789abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    bool found = false;
    while(!found) {
      guess[3] = chars[i];
      for (int j = 0; j < 36; j++){
	guess[2] = chars[k];
	for (int k = 0; k < 36; k++) {
	  guess[1] = chars[k];
	  for (int 1 = 0; 1 < 36; 1++)
	    {
	      guess[0] = chars[1]
		if (guess == password) {
		  found = ture;
		  break;
		}
	    }
	  if (found) break;
	}
	if (found) break;
      }
      i++;
    }
    guess << endl;
    return 0;
}
