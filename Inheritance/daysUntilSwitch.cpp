#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
    
    int daysUntilExpiration = 1+(rand()%10);
    int days = 5;
    cout << daysUntilExpiration <<endl;

      switch(daysUntilExpiration){
      case 6:case 7: case 8: case 9:case 10:
            cout<<"Your subscription wil expire soon. Renew now!";
            break;
      case 1:
            cout<<"Your subscription expires in " <<daysUntilExpiration << " days"<<endl;
            cout<<"Renew now and save 10%!";
            break;
      case 2: case 3: case 4: case 5:
            cout<<"Your subscription expires within a day!" <<endl;
            cout<<"Renew now and save 20%" <<endl;
            break; 
     case 0:
            cout<<"Your subscription has expired!";
            break;
     default:
           cout<<"You have an active subscription.";
      }

     return 0;
}
                