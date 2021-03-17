import unreal


@unreal.uclass()
class MainWindow(unreal.MxWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.set_window_title(u"测试窗口")
        self.resize(800, 100)

        self.open_file_path_button = unreal.MxButton()
        self.open_file_path_button.set_text(u"打开文件位置")
        self.import_selected_file_button = unreal.MxButton()
        self.import_selected_file_button.set_text(u"导入所选文件")

        self.TestEditText = unreal.MxEditableText()

        ButtonLayout = unreal.MxHorizontalBox()
        ButtonLayout.add_widget(self.TestEditText)
        ButtonLayout.add_widget(self.open_file_path_button)

        MainLayout = unreal.MxVerticalBox()
        MainLayout.add_widget(ButtonLayout)
        MainLayout.add_widget(self.import_selected_file_button)

        self.set_layout(MainLayout)

        # 代理必须声明为成员变量，销毁的时候会自动销毁，否则重新生成UI的时候,绑定的函数不会被刷新
        self.__ButtonClick = unreal.MxFunctionDelegate()
        self.__ButtonClick.bind_callable(self.TestClick)
        self.open_file_path_button.on_click_connect(self.__ButtonClick)
        self.import_selected_file_button.on_click_connect(self.__ButtonClick)

    def TestClick(self):
        unreal.MxUtils.debug_info_in_screen(self.TestEditText.get_text())
        unreal.MxUtils.debug_error_in_screen(self.TestEditText.get_text())
        unreal.MxUtils.debug_warning_in_screen(self.TestEditText.get_text())


Window = MainWindow()
Window.show()
