import QtQuick 2.0

Item {

    // Property
    property real size: 8

    width: size
    height: size

    Image {
        id: sfstar
        antialiasing: true
        transformOrigin: Item.Center
        anchors.fill: parent
        source: "img/sfstar.png"
    }

    Behavior on x { SmoothedAnimation{ duration: 500 } }
    Behavior on y { SmoothedAnimation{ duration: 500 } }
}
