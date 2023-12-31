QT       += core gui sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changepasswork.cpp \
    logdialog.cpp \
    main.cpp \
    maindialog.cpp \
    noedit.cpp \
    sqlchart.cpp

HEADERS += \
    changepasswork.h \
    logdialog.h \
    maindialog.h \
    noedit.h \
    sqlchart.h

FORMS += \
    changepasswork.ui \
    logdialog.ui \
    maindialog.ui \
    sqlchart.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

RC_ICONS = exe_ico.ico
