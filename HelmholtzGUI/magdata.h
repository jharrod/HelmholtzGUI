#ifndef MAGDATA_H
#define MAGDATA_H

#include <qstring.h>

struct MagData {
    QString address;
    QString bus;
    QString calx, caly, calz;
    QString rawx, rawy, rawz;
};

#endif // MAGDATA_H
