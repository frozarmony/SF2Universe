# Add more folders to ship with the application, here
folder_01.source = qml/SF2Universe
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp


# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

#change the runtime librairy used to multi thread
#Release:QMAKE_CXXFLAGS += /MT
#Debug:QMAKE_CXXFLAGS += /MTd

HEADERS += \
    ./OSC/include/OSC_Defines.h \
    ./OSC/include/OSC_MIDIInput.h \
    ./OSC/include/OSC_MIDIMessage.h \
    ./OSC/include/OSC_MIDIOutput.h \
    ./OSC/include/OSC_MultiThreading.h \
    ./OSC/include/OSC_SFManager.h \
    ./OSC/include/OSC_Timer.h \
    ./OSC/include/sfman.h




