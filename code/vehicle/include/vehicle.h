
//#############################################################################
//# Author: Wen Li
//# Date  : 3/31/2020
//# Description: class define for vehicle
//##############################################################################

#ifndef _VEHICLE_H_
#define _VEHICLE_H_
#include "macro.h"

using namespace std;

class Vehicle
{
private:
    string m_BusName;
    int m_Attr;
    int m_Status;
    int m_RoundTime;
    
public:
    Vehicle(string &BusName)
    {
        m_BusName = BusName;
        m_Status  = VEHICLE_ST_NOR;
        m_Attr    = VEHICLE_ATTR_USE;
        m_RoundTime = 0;
    }

    ~Vehicle() 
    {
        
    }


private:



public:
    inline char* GetBusName ()
    {
        return (char*)m_BusName.c_str();
    }
    
    inline void SetAttr (int Attr)
    {
        m_Attr = Attr;
    }

    inline int GetAttr ()
    {
        return m_Attr;
    }

    inline void SetStatus (int Status)
    {
        m_Status = Status;
    }

    inline int GetStatus ()
    {
        return m_Status;
    }

    inline int GetFillinRatio ()
    {
        return (random () %101);
    }

    inline void IncRoundTime ()
    {
        m_RoundTime++;
    }

    inline int GetRoundTime ()
    {
        return m_RoundTime;
    }


};

#endif
