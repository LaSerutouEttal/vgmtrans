/*
 * VGMTrans (c) 2018
 * Licensed under the zlib license,
 * refer to the included LICENSE.txt file
 */

#pragma once
#include <QAbstractListModel>
#include <QStyledItemDelegate>
#include <QListView>

class VGMCollListViewModel : public QAbstractListModel {
  Q_OBJECT

public:
  VGMCollListViewModel(QObject *parent = nullptr);
  int rowCount(const QModelIndex &parent = QModelIndex()) const;
  QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
  Qt::ItemFlags flags(const QModelIndex &index) const;
};

class VGMCollNameEditor : public QStyledItemDelegate {
  Q_OBJECT

protected:
  void setEditorData(QWidget *editor, const QModelIndex &index) const;
  void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
};

class VGMCollListView : public QListView {
public:
  VGMCollListView(QWidget *parent = nullptr);

private:
  void CollMenu(const QPoint &pos);
};
