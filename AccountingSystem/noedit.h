#ifndef NOEDIT_H
#define NOEDIT_H

#include <QWidget>
#include <QItemDelegate>

class ReadOnlyDelegate: public QItemDelegate
{
    Q_OBJECT
public:
    ReadOnlyDelegate(QWidget *parent = NULL);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
const QModelIndex &index) const override //final
    {
        Q_UNUSED(parent)
        Q_UNUSED(option)
        Q_UNUSED(index)
        return NULL;
    }
};

#endif // NOEDIT_H
