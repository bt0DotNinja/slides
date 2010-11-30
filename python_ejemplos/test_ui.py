# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'test_ui.ui'
#
# Created: Mon Nov 29 17:47:34 2010
#      by: PyQt4 UI code generator 4.4.2
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(388,291)
        self.pushButton = QtGui.QPushButton(Form)
        self.pushButton.setGeometry(QtCore.QRect(20,30,351,241))
        self.pushButton.setObjectName("pushButton")

        self.retranslateUi(Form)
        QtCore.QObject.connect(self.pushButton,QtCore.SIGNAL("clicked()"),Form.close)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        Form.setWindowTitle(QtGui.QApplication.translate("Form", "Form", None, QtGui.QApplication.UnicodeUTF8))
        self.pushButton.setText(QtGui.QApplication.translate("Form", "Hola...", None, QtGui.QApplication.UnicodeUTF8))

