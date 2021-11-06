QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    attackermain.cpp \
    ecgmain.cpp \
    eegmain.cpp \
    main.cpp \
    cyberbox.cpp \
    maincompmain.cpp \
    networkmain.cpp \
    node.cpp \
    router.cpp \
    spo2main.cpp

HEADERS += \
    attackermain.h \
    cyberbox.h \
    ecgmain.h \
    eegmain.h \
    maincompmain.h \
    networkmain.h \
    node.h \
    router.h \
    spo2main.h

FORMS += \
    attackermain.ui \
    cyberbox.ui \
    ecgmain.ui \
    eegmain.ui \
    maincompmain.ui \
    networkmain.ui \
    spo2main.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
