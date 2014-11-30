#include "charactersheet.h"

#include <QVBoxLayout>
#include <QLabel>

CharacterSheet::CharacterSheet(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout* topLayout = new QVBoxLayout(this);
    QLabel* label = new QLabel("Hello World!", this);
    topLayout->addStretch(1);
    topLayout->addWidget(label);
    topLayout->addStretch(1);
}

void CharacterSheet::
generate()
{
    //  TODO
}
