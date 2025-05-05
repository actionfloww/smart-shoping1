#ifndef SHAREDDATA_H
#define SHAREDDATA_H

#include <QString>

class SharedData {
public:
    static SharedData& instance() {
        static SharedData instance;
        return instance;
    }

    void setRandomString(const QString &randomString) {
        m_randomString = randomString;
    }

    QString getRandomString() const {
        return m_randomString;
    }
    void setmail(const QString &randomString) {
        mail = randomString;
    }

    QString getmail() const {
        return mail;
    }

    void clearRandomString() {
        m_randomString.clear();
    }

private:
    SharedData() = default;
    QString m_randomString;
    QString mail;
};

#endif // SHAREDDATA_H
