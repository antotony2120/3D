TEMPLATE = app
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L"C:/IDE/Libraries/SFML-2.4.2 32/lib"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

INCLUDEPATH += "C:/IDE/Libraries/SFML-2.4.2 32/include"
DEPENDPATH += "C:/IDE/Libraries/SFML-2.4.2 32/include"

SOURCES += main.cpp \
    cube.cpp \
    vector.cpp \
    angle.cpp \
    object.cpp

HEADERS += \
    cube.h \
    vector.h \
    angle.h \
    object.h
