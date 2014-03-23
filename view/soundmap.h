#ifndef SOUNDMAP_H
#define SOUNDMAP_H

#include <QObject>

class SoundMap : public QObject
{
		Q_OBJECT
	public:
		explicit SoundMap(QObject *parent = 0);

	public slots:
		//void			generateSoundMap();

	private:

};

#endif // SOUNDMAP_H
