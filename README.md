# Qt AimLab Lite 

##  简介 (Introduction)

**Qt Aim Trainer** 是一个基于 **Qt Framework (C++)** 开发的桌面端瞄准训练小程序。

该项目模拟了 FPS 游戏中的练枪环节，旨在帮助用户提高鼠标点击的准确度和反应速度。程序采用了模块化设计，包含开始界面、游戏说明、难度选择以及核心的游戏交互逻辑。

> **Qt Aim Trainer** is a lightweight desktop aim training application built with **Qt Framework (C++)**. It simulates FPS game mechanics to help users improve mouse accuracy and reaction time.

##  功能特性 (Features)

*   **多阶段流程控制**：完整的应用流程（开始 -> 说明 -> 选关 -> 游戏 -> 结算）。
*   **难度/样式选择 (Level System)**：
    *   在 `Level` 界面通过单选框（Radio Button）选择不同的目标样式（对应代码中的 `n1` 逻辑）。
    *   支持不同大小和形状的不规则按钮目标。
*   **核心游戏机制 (Gameplay)**：
    *   **随机移动**：目标按钮会在窗口设定区域内随机跳动。
    *   **倒计时系统**：支持用户自定义游戏时长（输入秒数）。
    *   **计分系统**：实时记录命中得分。
*   **绘图事件**：使用 `QPainter` 绘制自定义的游戏背景和界面元素。
*   **结算反馈**：游戏结束后弹出对话框显示最终得分，并支持“再来一次”或“退出”。

## 🛠️ 技术栈 (Tech Stack)

*   **语言**: C++
*   **框架**: Qt Widgets (Core, Gui)
*   **开发工具**: Qt Creator
*   **关键类**:
    *   `QWidget` / `QMainWindow`: 窗口基类
    *   `QTimer` / `timerEvent`: 处理游戏倒计时和目标刷新频率
    *   `QPainter` / `QPixmap`: 处理背景绘制和不规则图片遮罩 (`setMask`)
    *   `QMouseEvent`: 处理点击交互

## 📂 项目结构 (Project Structure)

```text
├── main.cpp          # 程序入口
├── start.cpp/.h/.ui  # 欢迎/开始界面
├── exp.cpp/.h/.ui    # (Explanation) 游戏说明/教程界面
├── level.cpp/.h/.ui  # 关卡/难度选择界面
├── body.cpp/.h/.ui   # 核心游戏界面 (瞄准训练主逻辑)
├── resource.qrc      # 资源文件 (包含背景图、目标图标等)
└── Aimlab.pro        # Qt 项目配置文件
