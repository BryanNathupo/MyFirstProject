#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
    
    int daysUntilExpiration = 1+(rand()%10);
    int days = 5;
    cout << daysUntilExpiration <<endl;

      switch(days){
      case days <= 10 && days > 5:
            cout<<"Your subscription wil expire soon. Renew now!";
            break;
      /*case daysUntilExpiration <= 5 && daysUntilExpiration > 1:
            cout<<"Your subscription expires in " <<daysUntilExpiration << " days"<<endl;
            cout<<"Renew now and save 10%!";
            break;
      case daysUntilExpiration == 1:
            cout<<"Your subscription expires within a day!" <<endl;
            cout<<"Renew your now and save 10%" <<endl;
            break;
     case daysUntilExpiration == 0:
            cout<<"Your subscription has expired!";
            break;*/
     default:
           cout<<"You have an active subscription.";
      }

     return 0;
}