import QtQuick 2.0

Rectangle {
    id: main
    width: 640
    height: 480
    z: 0

    Rectangle {
        id: board
        height: 64
        color: "#009fd1"
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#009fd1"
            }

            GradientStop {
                position: 1
                color: "#303030"
            }
        }
        anchors.right: parent.right
        anchors.rightMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0

        Image {
            id: openIcon
            width: height
            height: parent.height
            antialiasing: true
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 0
            source: "img/open-icon.png"

            MouseArea {
                id: openButton
                anchors.fill: parent
            }
        }

        Image {
            id: configIcon
            width: height
            height: parent.height
            antialiasing: true
            anchors.left: openIcon.right
            anchors.leftMargin: 0
            anchors.top: parent.top
            anchors.topMargin: 0
            source: "img/configure-icon.png"

            MouseArea {
                id: configButton
                anchors.fill: parent
                onClicked: clear()

                function clear()
                {
                    for(var i = soundMap.children.length; i > 0 ; i--)
                    {
                        soundMap.children[i-1].destroy()
                    }
                }
            }
        }

        Image {
            id: mapIcon
            x: 129
            y: 9
            width: height
            height: parent.height
            antialiasing: true
            anchors.topMargin: 0
            anchors.left: configIcon.right
            anchors.top: parent.top
            anchors.leftMargin: 0
            source: "img/map-icon.png"

            MouseArea {
                id: mapButton
                anchors.fill: parent
                onClicked: addSFStar()

                function addSFStar()
                {
                    for( var i=0; i<100; ++i)
                    {
                        var component;
                        component = Qt.createComponent("SFStar.qml");
                        if (component.status == Component.Ready)
                        {
                            var obj = component.createObject(soundMap);
                            obj.x = Math.random() * soundMap.width;
                            obj.y = Math.random() * soundMap.height;
                        }
                    }
                }
            }

        }


    }

    Rectangle {
        id: soundMap
        color: "#000000"
        anchors.top: board.bottom
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.topMargin: 0
    }
}
