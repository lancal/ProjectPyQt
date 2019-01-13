
# import sys
#
# #from PyQt5.QtWidgets import QApplication, QWidget
#
# from PyQt5.QtWidgets import QApplication, QWidget
#
#
# def app():
#
#     my_app = QApplication(sys.argv)
#
#     w = QWidget()
#
#     w.setWindowTitle("Testing this mug")
#
#     w.show()
#
#     sys.exit(my_app.exec_())
#
# app()

import sys

from PyQt5 import  QtGui
from PyQt5.QtWidgets import QApplication,QMainWindow

class Window(QMainWindow):

    def __init__(self):

        super().__init__()

        self.title = "Pyqt5 Window"
        self.top = 100
        self.left = 100
        self.width = 680
        self.height = 500

        self.InitWindow()

    def InitWindow(self):

        self.setWindowTitle(self.title)
        self.setGeometry(self.top,self.left,self.width,self.height)
        self.show()


app = QApplication(sys.argv)

window = Window()

sys.exit(app.exec())