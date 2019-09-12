#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
            Date() {};
            Date(String);
            String getDay() {return day;};
            String getMonth() {return month;};
            int getYear() {return year;};
            friend std::ostream& operator<<(std::ostream &out, Date rhs); 

private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
            Time() {};
            Time(String);
  private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
    LogEntry() {};
    LogEntry(String);
    String getLog() const {return log;};       
    Date getDate()      const    {return date;};
    String getHost()    const    {return host;};
    Time getTime()      const    {return time;};
    String getRequest() const    {return request;};
    String getStatus()  const    {return status;};
    int getNumOfBytes() const    {return number_of_bytes;};
    
    friend std::ostream& operator<<(std::ostream&, const LogEntry&);
    //friend std::ostream& operator<<(std::ostream &out, Date rhs); 

private:
    String log;
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);

#endif

