#ifndef TODOLIST_H
#define TODOLIST_H


#include <QAbstractTableModel>

class ToDoList: public QAbstractTableModel
{
public:
    ToDoList(QObject *parent);

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // TODOLIST_H
