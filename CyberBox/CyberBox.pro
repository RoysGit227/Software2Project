QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    attackerdialog.cpp \
    ecgdialog.cpp \
    eegdialog.cpp \
    main.cpp \
    cyberbox.cpp \
    maindialog.cpp \
    networkdialog.cpp \
    spo2dialog.cpp

HEADERS += \
    attackerdialog.h \
    cyberbox.h \
    ecgdialog.h \
    eegdialog.h \
    maindialog.h \
    networkdialog.h \
    spo2dialog.h

FORMS += \
    attackerdialog.ui \
    cyberbox.ui \
    ecgdialog.ui \
    eegdialog.ui \
    maindialog.ui \
    networkdialog.ui \
    spo2dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
