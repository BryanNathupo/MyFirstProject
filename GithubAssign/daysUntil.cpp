#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
    
    int daysUntilExpiration = 1+(rand()%10);
     cout << daysUntilExpiration <<endl;

      if(daysUntilExpiration <= 10 && daysUntilExpiration > 5){ 
            cout<<"Your subscription wil expire soon. Renew now!";
      }
      else if(daysUntilExpiration <= 5 && daysUntilExpiration > 1) {
            cout<<"Your subscription expires in " <<daysUntilExpiration << " days"<<endl;
            cout<<"Renew now and save 10%!";
      }  

      else if(daysUntilExpiration == 1){
            cout<<"Your subscription expires within a day!" <<endl;
            cout<<"Renew your now and save 10%" <<endl;
      }

     else if(daysUntilExpiration == 0){
            cout<<"Your subscription has expired!";
     }

     else{
           cout<<"You have an active subscription.";
     }
     return 0;
}