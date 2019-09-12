//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"


std::ostream& operator<<(std::ostream &out, Date rhs) {
    //std::cout << "Date called" << std::endl;
    out << rhs.day << rhs.month << rhs.year << "EndDate<<";
    
    return out;
}


Date::Date(String temp) {
    day = temp.substr(1,2);
    month = temp.substr(3,7);
    String tempTwo = temp.substr(8,11);
    year = tempTwo.toInt();
}



Time::Time(String t) {
    String temp = t.substr(13,14);
    hour = temp.toInt();
    String min = t.substr(16,17);
    minute = min.toInt();
    String sec = t.substr(19,20);
    second = sec.toInt();
}


std::ostream& operator<<(std::ostream &out, const LogEntry& rhs) {
    std::cout << "LogEntry<<" << std::endl;
    //out << rhs.getHost() << " ";
    //out << rhs.getDate() << "";
    //out << rhs.getRequest(); 
    //out << rhs.status; 
    //out << rhs.number_of_bytes; 
    //out << std::endl;
    return out;
}


////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
    
    if(vec.size() != 10)
        return;
    //log = vec[0] + vec[3] + vec[5] + vec[6] + vec[7] +;
    
    host = vec[0];
    date = vec[3];
    time = vec[3];
    request = (vec[5] + vec[6] + vec[7]);   
    status = vec[8];

   
    String temp = vec[9].substr(0, vec[9].length());
    if(temp != '-')
        number_of_bytes = temp.toInt();
    else
        number_of_bytes = 0;
    log = host + " " + vec[3].substr(1,2) + vec[3].substr(3,7) + vec[3].substr(8,11) + " " + vec[3].substr(13,14) +":" + vec[3].substr(16,17)+ ":" + vec[3].substr(19,20) + " " + request + " " + status + " " + temp;
    
    //String temp = t.substr(13,14);
    //hour = temp.toInt();
    //String min = t.substr(16,17);
    //minute = min.toInt();
    //String sec = t.substr(19,20);
    //second = sec.toInt();

     
    //day = temp.substr(1,2);
    //month = temp.substr(3,7);
    //String tempTwo = temp.substr(8,11); 
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//


std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    LogEntry entry;
    while(!in.eof()) {
        String temp;
        getline(in, temp);
        result.push_back(temp); 
    }
    
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &rhs) {
    std::cout << "Output all called " << std::endl;
    for(int i = 0; i < int(rhs.size()); ++i) 
        out << rhs[i].getLog() << '\n';
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& rhs) {
    std::cout << "By_host" << std::endl;
    for(int i = 0; i < int(rhs.size()); ++i)
        out << rhs[i].getHost() << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &rhs) {
    std::cout << "ByteCount" << std::endl;
    int result = 0;
    for(int i = 0; i < int(rhs.size()); ++i)
        result += rhs[i].getNumOfBytes();
    return result;    
}

