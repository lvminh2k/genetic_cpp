#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
tm string2time(string str){
    const char* charstar = str.c_str();
    int tm_year, tm_mon, tm_mday, tm_hour, tm_min, tm_sec;
    tm tm1 = {0};
	sscanf(charstar,"%4d-%2d-%2d",&tm1.tm_year,&tm1.tm_mon,&tm1.tm_mday);
    return tm1;
}
string time2string(tm tm1){
    char buffer[80];
    char b_mon[5];
    if (tm1.tm_mon < 10){
        sprintf(b_mon,"0%d", tm1.tm_mon);
    }
    else{
        sprintf(b_mon,"%d", tm1.tm_mon);
    }
    char b_day[5];
    if (tm1.tm_mday < 10){
        sprintf(b_day,"0%d", tm1.tm_mday);
    }
    else{
        sprintf(b_day,"%d", tm1.tm_mday);
    }
    sprintf(buffer, "%4d-%s-%s",tm1.tm_year,b_mon,b_day);
    string s(buffer);
    return s;
}
int compare(tm tm1, tm tm2){
    if (tm1.tm_year > tm2.tm_year) return 1;
    else if (tm1.tm_year < tm2.tm_year) return -1;
    else 
    if (tm1.tm_mon > tm2.tm_mon) return 1;
    else if (tm1.tm_mon < tm2.tm_mon) return -1; 
    else
    if (tm1.tm_mday > tm2.tm_mday) return 1;
    else if (tm1.tm_mday < tm2.tm_mday) return -1;  
    else return 0;
}
bool isEqual(tm tm1, tm tm2){
    if (tm1.tm_year != tm2.tm_year) return false;
    if (tm1.tm_mon != tm2.tm_mon) return false;
    if (tm1.tm_mday != tm2.tm_mday) return false;
    return true;
}

int main(){
    //http://www.cplusplus.com/forum/general/32092/
    //string -> datetime (tm struc)
    tm tm1 = string2time("1996-07-04");
    cout << tm1.tm_year << endl << tm1.tm_mon << endl << tm1.tm_mday << endl;
	cout << tm1.tm_hour << endl << tm1.tm_min << endl << tm1.tm_sec << endl;
    string s1 = time2string(tm1);
    cout << s1 << endl;
    
    tm tm2 = string2time("1996-07-04");
    string s2 = time2string(tm2);
    cout << s2 << endl;

    cout << compare(tm1, tm2) << endl;
    cout << isEqual(tm1, tm2) << endl;
    /*
    tm tm2 = string2time("20101127 130600");
    time_t t1 = mktime(&tm1);
    time_t t2 = mktime(&tm2);
    double kq = difftime(t1, t2);
    cout << kq;
	*/

    return 0;
}
int main1()
{
  time_t now;
  struct tm newyear;
  double seconds;

  time(&now);  /* get current time; same as: now = time(NULL)  */

  newyear = *localtime(&now);
    newyear = string2time("20211127 090600");
  newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0;
  newyear.tm_mon = 0;  newyear.tm_mday = 1;
    cout << mktime(&newyear) << endl;
  seconds = difftime(now,mktime(&newyear));

  printf ("%.f seconds since new year in the current timezone.\n", seconds);

  return 0;
}