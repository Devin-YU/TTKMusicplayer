#ifndef MUSICWYDISCOVERLISTTHREAD_H
#define MUSICWYDISCOVERLISTTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicnetworkabstract.h"

/*! @brief The class to wangyi discover toplist.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicWYDiscoverListThread : public MusicNetworkAbstract
{
    Q_OBJECT
public:
    explicit MusicWYDiscoverListThread(QObject *parent = 0);
    /*!
     * Object contsructor.
     */

    virtual ~MusicWYDiscoverListThread();

    static QString getClassName();
    /*!
     * Get class object name.
     */
    virtual void deleteAll() override;
    /*!
     * Release the network object.
     */
    void startSearchSong();
    /*!
     * Start to Search data from page.
     */

    inline QString getTopListInfo() const { return m_topListInfo; }
    /*!
     * Get top list info.
     */

public Q_SLOTS:
    virtual void downLoadFinished() override;
    /*!
     * Download data from net finished.
     */
    void searchTopListInfoFinished();
    /*!
     * Search top list information finished.
     */

protected:
    void searchTopListInformation(const QString &id);
    /*!
     * Search top list information.
     */

    QString m_topListInfo;

};

#endif // MUSICWYDISCOVERLISTTHREAD_H
