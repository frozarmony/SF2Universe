#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include <conio.h>
#include <QQuickItem>
#include <QQmlEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
	viewer.setMainQmlFile(QStringLiteral("qml/SF2Universe/main.qml"));

	// Get SounfMap Element
	QQuickItem* soundMap = viewer.findChild<QQuickItem*>("soundMap");

	// Create and Add SFStars
	QQmlComponent conponent(viewer.engine(), QUrl::fromLocalFile("qml/SF2Universe/SFStar.qml"));

	if(conponent.status() != QQmlComponent::Ready)
	{
		qDebug() << "Impossible to load Component !!";
	}
	else
	{
		for(int i=0; i<20; ++i)
		{
			QQuickItem* sfstar = qobject_cast<QQuickItem*>(conponent.create());
			sfstar->setParentItem(soundMap);
			sfstar->setProperty("x", qrand() % 300);
			sfstar->setProperty("y", qrand() % 300);
			sfstar->setVisible(true);
		}
	}


	viewer.showExpanded();

    return app.exec();
}
