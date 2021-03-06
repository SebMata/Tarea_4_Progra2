QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addproduct.cpp \
    deleteproduct.cpp \
    main.cpp \
    mainwindow.cpp \
    modifyproduct.cpp

HEADERS += \
    addproduct.h \
    deleteproduct.h \
    mainwindow.h \
    modifyproduct.h

FORMS += \
    addproduct.ui \
    deleteproduct.ui \
    mainwindow.ui \
    modifyproduct.ui

TRANSLATIONS += \
    ui_es_CR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../lib/release/ -ltienda
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../lib/debug/ -ltienda
else:unix: LIBS += -L$$PWD/../../lib/ -ltienda

INCLUDEPATH += $$PWD/../../lib/include
DEPENDPATH += $$PWD/../../lib/include
