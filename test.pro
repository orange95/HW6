#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T21:59:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

INCLUDEPATH += D:\\OneDrive\\summerLab2015\\0902\\myopencv\\include \
                D:\\OneDrive\\summerLab2015\\0902\\myopencv\\include\\opencv \
                D:\\OneDrive\\summerLab2015\\0902\\myopencv\\include\\opencv2 \

LIBS +=  D:\\OneDrive\\summerLab2015\\0902\\myopencv\\lib\\opencv_world300.lib \
         D:\\OneDrive\\summerLab2015\\0902\\myopencv\\lib\\opencv_ts300.lib \
         D:\\OneDrive\\summerLab2015\\0902\\myopencv\\lib\\opencv_world300d.lib \
         D:\\OneDrive\\summerLab2015\\0902\\myopencv\\lib\\opencv_ts300d.lib


FORMS    += mainwindow.ui
