#ifndef CQSQLITE_P_H
#define CQSQLITE_P_H

#include <QReadWriteLock>
#include <QSqlDatabase>

#include "cqsqlite.h"

class CqSqlitePrivate
{
    Q_DECLARE_PUBLIC(CqSqlite)

public:
    CqSqlitePrivate();
    virtual ~CqSqlitePrivate();
protected:
    CqSqlite *q_ptr;

public:
    static QString basePath;
    mutable QReadWriteLock guard;

private:
    QString fileName;
    QStringList prepareSqls;
    QSqlDatabase dbs;
};

#endif // CQSQLITE_P_H
