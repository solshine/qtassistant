﻿#ifndef CQPERSONINFO_P_H
#define CQPERSONINFO_P_H

#if _MSC_VER >= 1600
#  pragma execution_character_set("utf-8")
#endif

#include "cqpersoninfo.h"

class CqPersonInfoData : public QSharedData
{
public:
    CqPersonInfoData();

public:
    qint64 uid;
    qint32 sex;
    qint32 age;
    QString nickName;
};

#endif // CQPERSONINFO_P_H
