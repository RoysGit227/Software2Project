QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    attackermain.cpp \
    attacks.cpp \
    availability.cpp \
    confidentiality.cpp \
    cyberbox.cpp \
    ecgmain.cpp \
    eegmain.cpp \
    home.cpp \
    integrity.cpp \
    main.cpp \
    cyber.cpp \
    maincompmain.cpp \
    malware.cpp \
    networkmain.cpp \
    node.cpp \
    router.cpp \
    spo2main.cpp \
    tutorial.cpp \
    vulnerabilities.cpp \
    whatis.cpp

HEADERS += \
    attackermain.h \
    attacks.h \
    availability.h \
    confidentiality.h \
    cyber.h \
    cyberbox.h \
    ecgmain.h \
    eegmain.h \
    home.h \
    integrity.h \
    maincompmain.h \
    malware.h \
    networkmain.h \
    node.h \
    router.h \
    spo2main.h \
    tutorial.h \
    vulnerabilities.h \
    whatis.h

FORMS += \
    attackermain.ui \
    attacks.ui \
    availability.ui \
    confidentiality.ui \
    cyber.ui \
    cyberbox.ui \
    ecgmain.ui \
    eegmain.ui \
    home.ui \
    integrity.ui \
    maincompmain.ui \
    malware.ui \
    networkmain.ui \
    spo2main.ui \
    tutorial.ui \
    vulnerabilities.ui \
    whatis.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \

    ../../Users/Owner/Documents/Software2Project-main/TutorialIntegration/Resources.qrc
