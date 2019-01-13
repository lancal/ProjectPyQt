# import sys
# from PyQt5.QtWidgets import QApplication, QMainWindow
#
# from PyQt5 import uic
#
# class ventana(QMainWindow):
#
#     def __init__(self):
#
#         #iniciar el objeto QMainWindow
#         QMainWindow.__init__(self)
#         #cargar la configuracion del archivo .ui en el objeto
#         uic.loadUi("mainwindow.ui",self)
#
#
#
# #instancia para iniciar una aplicacion
# app = QApplication(sys.argv)
#
# #crear un objeto de la clase ventana
#
# _ventana = ventana()
#
# _ventana.show()
#
# #ejecutar la aplicacion
# app.exec_()

import sys
from PyQt5.QtWidgets import QApplication, QMainWindow

from PyQt5.QtCore import QUrl

from PyQt5 import  uic

class navegador(QMainWindow):

    def __init__(self):

        QMainWindow.__init__(self)
        uic.loadUi("mainwindow.ui",self)

        default_url = "http://google.com"

        self.navegador.setUrl(QUrl(default_url))

        self.url.setText(default_url)

        self.btn_back.setEnabled(False)

        self.btn_back.clicked.connect(self.navegador.back)

        self.url.returnPressed.connect(self.navegar)

        self.navegador.url_changed.connect(self.url_changed())

    def navegar(self):

        url = QUrl(self.url.text())

        self.navegador.setUrl(url)

    def url_changed(self):

        page = self.navegador.page()

        history = page.history()

        if history.canGoBack():

            self.btn_back.setEnabled(True)

        else:

            self.btn_back.setEnabled(False)

        url = self.navegador.url()

        self.url.setText(url.toString())





app = QApplication(sys.argv)

navegador = navegador()

navegador.show()

app.exec_()