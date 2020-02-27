#include <QFile>
#include <iostream>
#include <QMessageBox>
#include <QFileDialog>

ToDoList::ToDoList(QObject *parent)
    :QAbstractTableModel(parent)
{

}

int ToDoList::rowCount(const QModelIndex &parent) const
{
    return 3;
}

int ToDoList::columnCount(const QModelIndex &parent) const
{
    return 1;
}

QVariant ToDoList::data(const QModelIndex &index, int role) const
{

    if (role == Qt::DisplayRole){
        return QString("Row%1, Column%2")
                .arg(index.row())
                .arg(index.column());
    }

    return QVariant();
}
