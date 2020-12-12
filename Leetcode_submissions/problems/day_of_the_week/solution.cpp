class Solution {
public:
    
    string dayNames[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap(int year){
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    int caldays(int day, int month, int year){
        int tot_days = day - 1;
        for (int i=1970;i<year;i++){
            tot_days += 365;
            if (leap(i)) tot_days++;
        }
        for (int i=1;i<month;i++){
            tot_days += daysInMonth[i-1];
            if (i==2) tot_days += leap(year);
        }
        return tot_days;
    }
    string dayOfTheWeek(int day, int month, int year) {
        
        int d1 = caldays(12,12,2020);
        int d2 = caldays(day,month,year);

        int dif=(d2-d1)%7;  
        if(dif<0) dif+=7;
        return dayNames[dif];
    }
};