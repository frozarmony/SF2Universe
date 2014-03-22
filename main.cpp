#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
//#include <OSC/include/OSC_MIDIOutput.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/SF2Universe/main.qml"));
    viewer.showExpanded();

	/*printf("--- The OSC Tutorial ---\n\n");

        OSC_MIDIOutput midiout;
        OSC_MIDIMessage msg;

        midiout.Open(0);
        msg.SetMessageType(OSC_MIDI_MESSAGE_NOTE_ON);
        msg.SetChannel(0);
        msg.SetNoteNumber(60);
        msg.SetNoteVelocity(127);
        midiout.SendMIDIMessage(msg);
        Sleep(1000);
        msg.SetMessageType(OSC_MIDI_MESSAGE_NOTE_OFF);
        midiout.SendMIDIMessage(msg);
        printf("Hit a key to exit\n");
        getch();
		midiout.Close();*/


    return app.exec();
}
