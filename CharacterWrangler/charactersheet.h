#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>

class CharacterSheet : public QWidget
{
    Q_OBJECT
public:
    explicit CharacterSheet(QWidget *parent = 0);

    virtual void generate(void);

signals:
    
public slots:
    // TODO void save(void);

private:

    // primary attributes
    int _strength;
    int _dexterity;
    int _constitution;
    int _intelligence;
    int _wisdom;
    int _charisma;
};

#endif // CHARACTERSHEET_H
