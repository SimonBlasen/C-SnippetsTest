#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractTableModel>
#include <QTime>

class MyModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    MyModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    int columnCount(const QModelIndex &parent = QModelIndex()) const ;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // MYMODEL_H
