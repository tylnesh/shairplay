#ifndef RAOPSERVICE_H
#define RAOPSERVICE_H

#include <QObject>

#include "raopcallbacks.h"

#include "raop.h"

class RaopService : public QObject
{
    Q_OBJECT
public:
    explicit RaopService(QObject *parent = 0);
    ~RaopService();

    bool init(int max_clients, RaopCallbacks *callbacks);
    bool start(quint16 port, const QByteArray & hwaddr);
    bool isRunning();
    void stop();

private:
    raop_t *             m_raop;

signals:

public slots:

};

#endif // RAOPSERVICE_H
